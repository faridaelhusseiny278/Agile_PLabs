#include "tm4c123gh6pm.h"
#include "DIO.h"
#include "bitwise_operation.h"
#include "types.h"




int main()
{
  DIO_Init();
  uint16 pin=0;
  volatile uint32 *port;
  while (1){
    
  volatile uint64 *port_F;
  *port_F = GPIO_PORTF_DATA_R;
  
  DIO_WritePin ( port_F , 2 , 1);
  DIO_WritePort( port_F , 0x02);
  
  pin = DIO_ReadPin(port_F,  2 ,  1);
  port = DIO_ReadPort(port_F , 0x02);
  
  if (pin ==1 && *port == 0x02)
  {delay();
  
    DIO_WritePin ( port_F , 2 , 0);
    DIO_WritePort( port_F , 0x00);
    
    pin = DIO_ReadPin(port_F,  2 ,  0);
    port = DIO_ReadPort(port_F , 0x00);
  }  
else if (pin ==0 && *port == 0x00)
{    delay();
}
  }
  
  
  return 0;
}
