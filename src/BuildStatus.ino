/*
 * Project BuildStatus
 * Description:
 * Author:
 * Date:
 */
#include <neopixel.h>
#include <stdint.h>
#include "sequences.h"

uint16_t custom_animation_length = (sizeof(tetanus_data) / sizeof(tetanus_data[0]));    //The number of frames in the above array
uint16_t custom_animation_framerate = 100;

 // IMPORTANT: Set pixel COUNT, PIN and TYPE
#define PIXEL_COUNT 16
#define PIXEL_PIN A5
#define PIXEL_TYPE WS2812B
#define MAX_BRIGHTNESS 200

uint8_t grid_brightness = 200;
uint8_t state_transition_flag = 1;
uint8_t mode_transition_flag = 1;

int startTime;
int currentMode;

Adafruit_NeoPixel grid(PIXEL_COUNT, PIXEL_PIN, PIXEL_TYPE);

int currentPixel = 1;

uint32_t red = grid.Color(255, 0, 0);
uint32_t green = grid.Color(0, 255, 0);
uint32_t blue = grid.Color(0, 0, 255);
uint32_t white = grid.Color(255, 255, 255);
uint32_t magenta = grid.Color(255, 0, 255);
uint32_t yellow = grid.Color(255,255,0);
uint32_t black = grid.Color(0,0,0);

#define MODE_INACTIVE 0
#define MODE_BUILDING 1
#define MODE_GREEN 2
#define MODE_RED 3
#define MODE_BLUE 4

// uint16_t custom_animation_framerate = 200;

//***************************
//Animation control variables
static uint16_t frame = 0;
static uint32_t begin = 0;

const uint8_t defaultBrightness = 40;

const uint8_t pixel_map[] = {
  0,7,8,15,
  1,6,9,14,
  2,5,10,13,
  3,4,11,12
};

const uint8_t chase_map[] = {
  0, 7, 8, 15,
  14, 13, 12, 11,
  4, 3, 2, 1,
  6, 9, 10, 5
};

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  grid.begin();
  delay(50);
  grid.setBrightness(defaultBrightness);
  grid.clear();
  grid.show();

  Serial.begin(115200);

  Particle.function("building", Building);
  Particle.function("green", Green);
  Particle.function("red", Red);
  Particle.function("black", Black);
  Particle.function("blue", Blue);

  fill_worm(red);
  delay(50);
  fill_worm(white);
  delay(50);
  fill_worm(blue);
  delay(50);
  fill_worm(black);

}

void updateDisplay() {

  if (currentMode != MODE_INACTIVE) {
    int currentTime = millis();
  }

  if (currentMode == MODE_BUILDING) {
    tetris();
  }
}

int Black(String command) {
  fill_worm(white);
  fill_worm(black);
  currentMode = MODE_INACTIVE;
  return 0;
}
int Building(String command) {
  startTime = millis();
  currentMode = MODE_BUILDING;
  return 0;
}

int Green(String command) {
  fill_worm(green);
  currentMode = MODE_GREEN;
  return 0;
}

int Red(String command) {
  fill_worm(red);
  currentMode = MODE_RED;
  return 0;
}

int Blue(String command) {
  fill_worm(blue);
  currentMode = MODE_BLUE;
  return 0;
}
void loop() {
  updateDisplay();
}

//**************************************************
//Return the number of milliseconds since start_time
uint32_t time_since(uint32_t start_time)
{
  return(millis()-start_time);
}

void tetris() {

  int framerate = 200;
  //Check if enough time has passed between frames
  if(time_since(begin) < framerate)
  {
    return;
  }

  //*****************************************
  //Check if we're just starting the sequence
  if(state_transition_flag)
  {
    grid.setBrightness(100);
    state_transition_flag = 0;
    frame = 0;
  }
  begin = millis();

  //*****************************************
  //Update the LEDs to display the next frame
  for(uint8_t i=0; i<grid.numPixels(); i++)
  {
    grid.setPixelColor(pixel_map[i],tetanus_data[frame][i]);
  }
  grid.show();

  //*********************************************************************
  //Set the animation to loop by starting from the beginning once it ends
  if(++frame >= TETANUS_FRAME_COUNT)
  {
    frame = 0;
  }

}




// fills the grid with a new color, 1 pixel at a time
void fill_worm(uint32_t c) {

  for (int i = 0; i < PIXEL_COUNT; i++) {
    grid.setPixelColor(chase_map[i], c);
    grid.show();
    delay(25);
  }
}
