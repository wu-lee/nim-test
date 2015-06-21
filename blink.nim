import unsigned
const
  DDRBaddr = 0x04 + 0x20
  PORTBaddr = 0x05 + 0x20

type
  byteaddr = ptr uint8


#proc blink() = 
#  echo "blink"

proc blank() =
  var
    delay : uint16 = 1000
    value : uint8 = 0
    DDRB {.volatile.} : byteaddr = cast[byteaddr](DDRBaddr)
    PORTB {.volatile.} : byteaddr = cast[byteaddr](PORTBaddr)

#proc DDRB(value: uint8) = 
#  cast[ptr uint8](DDRBaddr) = value

#proc PORTB(value: uint8) = 
#  cast[ptr uint8](PORTBaddr) = value


  # Set pin 5 of port b for output
  DDRB[] = 0
  PORTB[] = 255

  while true:
    PORTB[] = value
    value = not value
    delay = 32000
    while delay != 0:
      delay -= 1


discard blank
  
  
  

