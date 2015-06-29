#PROGRAMMER=avrisp2
#DEVICE=usb:FTCTNJC5 # found using cat /proc/bus/usb/devices
PROGRAMMER=arduino
DEVICE=/dev/ttyUSB1

# -C/usr/share/arduino/hardware/tools/avrdude.conf -v -v -v -v -patmega168 -carduino -P/dev/ttyUSB2 -b19200 -D -Uflash:w:/tmp/build1872456215574368134.tmp/Blink.cpp.hex:i 

# if this is not specified, you may find it fails with the error
# avrdude: Device signature = <something random>
# avrdude: Expected signature for ATtiny13 is 1E 90 07
#          Double check chip, or use -F to override this check.
BITCLOCK=1

CC=avr-gcc
AS=avr-as

# when programming the ATtiny13, remember to connect PORTE pin 4 (rst)
# to PORTB pin 6 (PB5) on the stk500 board
MMCU=atmega168
DUDE_MCU=atmega168
#MMCU=atmega8515

CFLAGS=\
-I ~/i/installs/Nim/lib -g -mmcu=${MMCU} -Wl,--verbose
#\
#-O3       \
#-fpack-struct -fshort-enums               \
#-funsigned-bitfields -funsigned-char \
#-Wall

ASFLAGS=\
-I. -g -mmcu=${MMCU} -O3       \
-fpack-struct -fshort-enums               \
-funsigned-bitfields -funsigned-char \
-Wall

#-Wall -gdwarf-2  -x c++  -Os -fsigned-char -fpack-struct -fshort-enums
#-Wall -gdwarf-2 -DNDEBUG  -O3 -fsigned-char -fpack-struct -fshort-enums

#IBMPCFontReduced.c \
#IBMPCFont.c \

SOURCE=\
nimcache/blink.c

#tests.c

#ASM=\
#attiny_cycle.S


TARGET=${SOURCE:.c=.hex}

OBJ=${SOURCE:.c=.o} nimcache/stdlib_system.o nimcache/stdlib_unsigned.o
#${ASM:.S=.o}

SOURCE2 = nimcache/stdlib_system.c nimcache/stdlib_unsigned.c

BIN=${SOURCE:.c=.bin}

# this only works on linux
#USB_SERIAL:=$(shell perl -ne 'print $$1 if /AVR/../SerialNumber=(\w+)/' /proc/bus/usb/devices)

#To add an entry for the AVR ISP mkII to udev, add the following to /etc/udev/rules.d/40-permissions.rules:
##AVRISP mkII
#SUBSYSTEM=="usb_device",SYSFS{idVendor}=="03eb",SYSFS{idProduct}=="2104",MODE="0666"

all: ${TARGET}


${BIN}: ${SOURCE} ${SOURCE2}
	${CC} ${CFLAGS} $^ -o $@ 


${TARGET}: ${BIN}
	avr-objcopy -j .text -j .data -O ihex $< $@


upload: ${TARGET}
	avrdude -p ${DUDE_MCU} -c ${PROGRAMMER} -b19200 -e -U flash:w:${TARGET} -P ${DEVICE}


list-devices:
	avrdude -p ${DUDE_MCU} -c ${PROGRAMMER} -e -U flash:w:${TARGET} -v -P usb:xx

clean:
	rm -f ${TARGET} ${OBJ} ${BIN}
