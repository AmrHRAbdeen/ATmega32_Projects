/*
 * main.c
 *
 *  Created on: Jan 22, 2019
 *      Author: Amr Abdeen
 */
#define DDRD 0x31
#define PORTD 0x32
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
/* Set D0 as output DDRD -> bit 0 = 1 */
	((Register*) DDRD)->ByteAccess =0x00;

/* Set D0 to HIGH PORTD -> bit 0 = 1 */
	((Register*) PORTD)->ByteAccess=0x00;

	return 0;
}


