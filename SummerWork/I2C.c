#include"TYPES.h"
#include"MACROS.h"
#include"REGISTERS.h"
#include "I2C.h"
void I2C_VidInit_Master(void)
{
	BIT_RATE_REG = 7;                               //0x02; // bit rate = 400.000 kbps, F_CPU = 12M   SCL freq= F_CPU/(16+2(TWBR).4^TWPS)
	//prescaler
	CLR_BIT(STATUS_REG,PRE0);
	CLR_BIT(STATUS_REG,PRE1);
	SET_BIT(CONTROL_REG,I2C_EN);                    //enable I2C
    SET_BIT(CONTROL_REG , ACK_EN);

}

void I2C_VidiInit_Slave(void)
{
	ADDRESS_REG = 1;                                // my address = 0x1
	SET_BIT(CONTROL_REG,I2C_EN);                    //enable I2C
	SET_BIT(CONTROL_REG , ACK_EN);
}

void I2C_VidStart(void)
{
	SET_BIT(CONTROL_REG,IF);
	SET_BIT(CONTROL_REG,START_BIT);                  // Clear TWI interrupt flag, Put start condition on SDA, Enable TWI
	while((GET_BIT(CONTROL_REG,IF))==0);               // Wait till start condition is transmitted
	while((STATUS_REG & 0xF8) != START_ACK);         // Check for the acknowledgment
}

void I2C_VidRepeatedStart(void)
{
	SET_BIT(CONTROL_REG,IF);
	SET_BIT(CONTROL_REG,START_BIT);                  // Clear TWI interrupt flag, Put start condition on SDA, Enable TWI
	while((GET_BIT(CONTROL_REG,IF))==0);               // Wait till start condition is transmitted
	while((STATUS_REG & 0xF8) != START_ACK);         // Check for the acknowledgment
}

void I2C_VidSendSlaveAddressWithWriteRequest(u8 LOC_u8SlaveAddress)
{
	SET_BIT(CONTROL_REG,IF);                                     // Clear TWI interrupt flag
	DATA_REG = ((LOC_u8SlaveAddress<<1));                         //Address and write instruction
	CLR_BIT(DATA_REG,RW);                                       //here w clear this bit to write
	while((GET_BIT(CONTROL_REG,IF)) ==0);                          //Wait till complete TWDR byte transmitted
	while((STATUS_REG & 0xF8) != SLAVE_ADDRESS_AND_WRITE_ACK);  // Check for the acknowledgment
}

void I2C_VidSendSlaveAddressWithReadRequest(u8 LOC_u8SlaveAddress)
{
	SET_BIT(CONTROL_REG,IF);                                     // Clear TWI interrupt flag
	DATA_REG = (LOC_u8SlaveAddress<<1);                         //Address and write instruction
	SET_BIT(DATA_REG,RW);                                       //here w clear this bit to read
	while((GET_BIT(CONTROL_REG,IF))==0);                          //Wait till complete TWDR byte transmitted
	while((STATUS_REG & 0xF8) != SLAVE_ADDRESS_AND_READ_ACK);  // Check for the acknowledgment
}

void I2C_VidWriteByteDataMaster(u8 LOC_u8ByteData)
{
	SET_BIT(CONTROL_REG,IF);                           // Clear TWI interrupt flag,Enable TWI
	DATA_REG = LOC_u8ByteData;                         // put data in TWDR
	while((GET_BIT(CONTROL_REG , IF))==0);                 // Wait till complete TWDR byte transmitted
	while((TWSR & 0xF8) != WRITE_BYTE_ACK);            // Check for the acknowledgment
}

u8 I2C_VidReadByteDataMaster(void)
{


	while((STATUS_REG & 0xF8) != READ_BYTE_ACK);       // Check for the acknowledgment
	return DATA_REG;
}

void I2C_VidStop(void)
{
	SET_BIT(CONTROL_REG,IF);
	SET_BIT(CONTROL_REG,STOP_BIT);
	while((GET_BIT(CONTROL_REG,IF))==0); // Clear TWI interrupt flag, Put stop condition on SDA,Enable TWI
}

/*
void I2C_VidCheckSlaveAddressReceivedWithWriteRequest(void)
{
	TWCR = (1<<TWEA) | (1<<TWEN) | (1<<TWINT);       // enable acknowledgment after receive, Enable TWI, Clear TWI interrupt flag
	while (!(TWCR & (1<<TWINT)));                    // Wait for TWINT flag
	while((TWSR & 0xF8) != SLAVE_ADD_RCVD_WR_REQ) ;
}
*/

/*
void i2c_slave_check_slave_address_received_with_read_req(void)
{
	TWCR = (1<<TWEA) | (1<<TWEN) | (1<<TWINT); // enable acknowledgment after receive, Enable TWI, Clear TWI interrupt flag
	while (!(TWCR & (1<<TWINT)));              // Wait for TWINT flag
	while((TWSR & 0xF8) != SLAVE_ADD_RCVD_RD_REQ);
	return;
}

*/
u8 I2C_u8SlaveReadByteData(void)

{
	while((STATUS_REG & 0xF8) != SLAVE_RECEIVED_DATA_ACK);
	return DATA_REG;
}

/*
void i2c_slave_write_byte(unsigned char byte)
{
	TWDR = byte;
	TWCR = (1<<TWINT) | (1<<TWEA) | (1<<TWEN);    // Clear TWI interrupt flag,Get enable acknowledgment, Enable TWI
	while(!(TWCR & (1<<TWINT)));                  // Wait for TWINT flag
	while((TWSR & 0xF8) != SLAVE_BYTE_TRANSMITTED);    // Data byte in TWDR has been transmitted
	return;
}

*/
