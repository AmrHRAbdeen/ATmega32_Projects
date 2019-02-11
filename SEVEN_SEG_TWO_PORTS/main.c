
#define F_CPU 8000000UL

#define DDRD  ((Register*) 0x31)
#define PORTD ((Register*) 0x32)
#define DDRC  ((Register*) 0x34)
#define PORTC ((Register*) 0x35)

#define TRUE 1
#define NINE_SEVEN_SEG  0x6F
#define THREE_SEVEN_SEG 0x4F

typedef unsigned char u8;

/*ALT+SHIFT+A --> vertical Clear In/Out*/
typedef union {
	struct {
		u8 Bit0:1;
		u8 Bit1:1;
		u8 Bit2:1;
		u8 Bit3:1;
		u8 Bit4:1;
		u8 Bit5:1;
		u8 Bit6:1;
		u8 Bit7:1;
	} BitAccess;

	u8 ByteAccess;

}Register;

int main(void)
{
	/*Configurations*/
	/* Set D0 as output DDRD -> bit 0 = 1 */
	DDRD->ByteAccess =0x00;
	DDRC->ByteAccess =0xFF;
	while(TRUE){

			PORTD->ByteAccess=NINE_SEVEN_SEG;
			PORTC->ByteAccess=THREE_SEVEN_SEG;
	}


	return 0;
}


