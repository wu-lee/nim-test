import unsigned
const
  DDRBaddr = 0x04 + 0x20
  PORTBaddr = 0x05 + 0x20

type
  byteaddr = ptr uint8

#proc blank(x:int) :int =
var
  delay : uint16
  value : uint8 = 0
  DDRB {.volatile.} : byteaddr = cast[byteaddr](DDRBaddr)
  PORTB {.volatile.} : byteaddr = cast[byteaddr](PORTBaddr)


# Set pin 5 of port b for output
DDRB[] = 255

while true:
  value = not value
  delay = 32000
  while delay != 0:
    delay -= 1
  PORTB[] = value
#  return 0

#discard blank(3)

