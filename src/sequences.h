#include <stdint.h>

#define TETANUS_FRAME_COUNT 21
#define TETANUS_FRAME_WIDTH 4
#define TETANUS_FRAME_HEIGHT 4

/* Piskel data for "tetanus" */

static const uint32_t tetanus_data[21][16] = {
{
0x000000, 0x000000, 0x000000, 0x000000,
0x000000, 0x000000, 0x000000, 0x000000,
0x000000, 0x000000, 0x000000, 0x000000,
0x000000, 0x000000, 0x000000, 0x000000
},
{
0x0bb800, 0x000000, 0x000000, 0x000000,
0x000000, 0x000000, 0x000000, 0x000000,
0x000000, 0x000000, 0x000000, 0x000000,
0x000000, 0x000000, 0x000000, 0x000000
},
{
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x000000, 0x000000, 0x000000, 0x000000,
0x000000, 0x000000, 0x000000, 0x000000
},
{
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x000000, 0x000000, 0x000000, 0x000000
},
{
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000
},
{
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000
},
{
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000
},
{
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000
},
{
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2,
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000
},
{
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2,
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2,
0x0bb800, 0x000000, 0x000000, 0x000000
},
{
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2,
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2
},
{
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2,
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2
},
{
0x0bb800, 0xff0b00, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2,
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2
},
{
0x0bb800, 0xff0b00, 0x000000, 0x000000,
0x0bb800, 0xff0b00, 0x000000, 0x000000,
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2,
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2
},
{
0x0bb800, 0xff0b00, 0xff0b00, 0x000000,
0x0bb800, 0xff0b00, 0x000000, 0x000000,
0x0bb800, 0xff0b00, 0x0c00d2, 0x0c00d2,
0x0bb800, 0x000000, 0x0c00d2, 0x0c00d2
},
{
0x0bb800, 0x000000, 0x000000, 0x000000,
0x0bb800, 0xff0b00, 0xff0b00, 0x000000,
0x0bb800, 0xff0b00, 0x0c00d2, 0x0c00d2,
0x0bb800, 0xff0b00, 0x0c00d2, 0x0c00d2
},
{
0x0bb800, 0x000000, 0x000000, 0xe5ff00,
0x0bb800, 0xff0b00, 0xff0b00, 0x000000,
0x0bb800, 0xff0b00, 0x0c00d2, 0x0c00d2,
0x0bb800, 0xff0b00, 0x0c00d2, 0x0c00d2
},
{
0x0bb800, 0xe5ff00, 0xe5ff00, 0xe5ff00,
0x0bb800, 0xff0b00, 0xff0b00, 0xe5ff00,
0x0bb800, 0xff0b00, 0x0c00d2, 0x0c00d2,
0x0bb800, 0xff0b00, 0x0c00d2, 0x0c00d2
},
{
0x0bb800, 0xe5ff00, 0xe5ff00, 0xe5ff00,
0x0bb800, 0xff0b00, 0xff0b00, 0xe5ff00,
0x0bb800, 0xff0b00, 0x0c00d2, 0x0c00d2,
0x0bb800, 0xff0b00, 0x0c00d2, 0x0c00d2
},
{
0x0bb800, 0xe5ff00, 0xe5ff00, 0xe5ff00,
0x0bb800, 0xff0b00, 0xff0b00, 0xe5ff00,
0x0bb800, 0xff0b00, 0x0c00d2, 0x0c00d2,
0x0bb800, 0xff0b00, 0x0c00d2, 0x0c00d2
},
{
0x0bb800, 0xe5ff00, 0xe5ff00, 0xe5ff00,
0x0bb800, 0xff0b00, 0xff0b00, 0xe5ff00,
0x0bb800, 0xff0b00, 0x0c00d2, 0x0c00d2,
0x0bb800, 0xff0b00, 0x0c00d2, 0x0c00d2
}
};
