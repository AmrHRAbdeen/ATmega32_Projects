
//#include <util/delay.h>

#include "delay_milli_interface.h"


#define DDRD             0x31
#define PORTD            0x32


#define ValFun    		 10
#define ValFun2    		 600


typedef char u8;

typedef union {

	struct{
		u8 Bit0 : 1 ;
		u8 Bit1 : 1 ;
		u8 Bit2 : 1 ;
		u8 Bit3 : 1 ;
		u8 Bit4 : 1 ;
		u8 Bit5 : 1 ;
		u8 Bit6 : 1 ;
		u8 Bit7 : 1 ;
	}BitAccess;

	u8 ByteAccess ;

}Register;







int main(void){


	((Register*) DDRD)  -> ByteAccess      = 0xFF ;     /* this  *((u8*) 0x313) is for casting the 0x31 from an integer value to an address */
	((Register*) PORTD) -> ByteAccess      = 0x00 ;
	((Register*) PORTD) -> BitAccess.Bit1  = 0 ;


	while(1){

		((Register*) PORTD) -> ByteAccess  = 0x01 ;

		delay_milliSecond(ValFun) ;

		((Register*) PORTD) -> ByteAccess  = 0x00 ;

		//_delay_ms(ValFun2) ;

		delay_milliSecond(ValFun) ;

		//((Register*) PORTD) -> ByteAccess  = 0x01 ;
	}


return 0 ;
}

