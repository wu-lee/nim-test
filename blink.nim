import unsigned
const
  DDRBaddr = 0x04 + 0x20
  PORTBaddr = 0x05 + 0x20
  arduinoPath = "/usr/share/arduino/hardware/arduino/cores/arduino/"

{.passC: "-DF_CPU=16000000L".}
{.passC: "-I" & arduinoPath.}
{.passC: "-I" & arduinoPath & "../../variants/standard/".}

{.compile: arduinoPath & "wiring.c".}

type
  byteaddr = ptr uint8

var
  value : uint8 = 255
  DDRB {.volatile.} : byteaddr = cast[byteaddr](DDRBaddr)
  PORTB {.volatile.} : byteaddr = cast[byteaddr](PORTBaddr)

proc delay_ms(ms: uint16) {.importc: "_delay_ms", header: "util/delay.h" .}

# Set pin 5 of port b for output
DDRB[] = 255

PORTB[] = value
while true:
  value = not value
  PORTB[] = value
  delay_ms(100)

