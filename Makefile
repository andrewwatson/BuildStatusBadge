DEVICE=2c001c000d51353432393339

all: firmware

firmware:
	rm -f *.bin
	particle compile electron
	cp *.bin firmwares/latest.bin
	mv *.bin firmwares/

clean:
	rm -f firmwares/*.bin

flash: firmwares/latest.bin
	particle flash ${DEVICE} firmwares/latest.bin

building:
	particle call ${DEVICE} building

green:
	particle call ${DEVICE} green

red:
	particle call ${DEVICE} red

black:
	particle call ${DEVICE} black

blue:
	particle call ${DEVICE} blue
