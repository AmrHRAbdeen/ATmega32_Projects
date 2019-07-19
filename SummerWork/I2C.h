#ifndef I2C_MASTER_H_
#define I2C_MASTER_H_



/////////////////////////////////////////////Registers //////////////////////////////////////////////////////////



/*TWAR Register*/

/*this register is consist off 7 bits address and one bit to general call feature */
#define ADDRESS_REG TWAR
//bit7 : 1 for address
#define GENERAL_CALL   0




/* TWCR register*/


#define CONTROL_REG TWCR

#define IF               7    //This flag must be cleared by software by write logical one even we used interrupt
#define ACK_EN           6
#define START_BIT        5    //This flag must be cleared by software by write logical zero after send it
#define STOP_BIT         4
#define COLLISIN_FLAG    3
#define I2C_EN           2
// bit 1 reserved
#define IE               0




/* TWSR */
//bit 0 : 1 the prescaler of clock , bit 2 reserved and the rest is the status

#define STATUS_REG TWSR


//bit7 : 3 status register
// bit 2 reserved
#define PRE1   1
#define PRE0   0


/*TWBR*/
//bit rate register
#define BIT_RATE_REG TWBR


/*TWDR*/
//data register
#define DATA_REG TWDR
//bin 7 : 0 data
//when we send address in data , bit 0 is R/W
#define RW 0






/////////////////////////////////////////////////Status register conditions////////////////////////////////////

//Master transmit or receive
#define START_ACK                         0x08 // start has been sent
#define REPEAT_START_ACK                  0x10 // repeated start
#define ARBITRATION_LOST                  0x38 // Two-wire Serial Bus will be released and not addressed
                                               //slave mode will be entered
                                               //A START condition will be transmitted when the bus becomes free


//Master transmit
#define SLAVE_ADDRESS_AND_WRITE_ACK       0x18 // Master transmit ( slave address + Write request ) ACK
#define SLAVE_ADDRESS_AND_WRITE_NOTACK    0x20 // Master transmit ( slave address + Write request ) NOT ACK
#define WRITE_BYTE_ACK                    0x28 // Master transmit data ACK
#define WRITE_BYTE_NOTACK                 0x30 // Master transmit data NOT ACK


//Master receive
#define SLAVE_ADDRESS_AND_READ_ACK        0x40 // Master transmit ( slave address + Read request ) ACK
#define SLAVE_ADDRESS_AND_READ_NOTACK     0x48 // Master transmit ( slave address + Read request ) NOT ACK
#define READ_BYTE_ACK                     0x50 // Master receive data ACK
#define READ_BYTE_NOTACK                  0x58 // Master receive data NOT ACK

//Slave receive
#define OWN_SLAVE_ADDRESS_RECEIVE_WRITE_REQ_ACK              0x60 //this slave check this address and this address is his
                                                                  // address and the master want to write on him ACK
                                                                  //(el slave y2ol aywa dh el address bta3y)

#define OWN_SLAVE_ADDRESS_WRITE_REQ_ARBITRATION_ACK    0x68 //this slave check this address and this address is his
                                                                  // address and the master want to write or read on him and
                                                                  // arbitration lost ACK
                                                                  //(el slave y2ol aywa dh el address bta3y )
                                                                  //(el slave kan mstny ykr2 mn el master w el master 5sr)

#define GENERAL_CALL_ADDRESS_RECEIVED_ACK                    0x70 //General call address has been
                                                                  //received; ACK has been returned
                                                                  //(el slave y2ol aywa ana  m43'l el general call)

#define SLAVE_RECEIVED_DATA_ACK                              0x80 // means that this slave received  data
#define SLAVE_RECEIVED_DATA_NOTACK                           0x88 // means that this slave does'nt receive data


#define GENERAL_CALL_ADDRESS_RECEIVED_DATA_ACK               0x90
                                                      //(el slave y2ol aywa ana  m43'l el general call w est2bl el data)



#define GENERAL_CALL_ADDRESS_RECEIVED_DATA_NOTACK            0x98
                                                     //(el slave y2ol aywa ana  m43'l el general call w mst2blt4 el data)


#define STOP_REPEATED_START_RECEIVED_ACK                     0xA0


//Slave Transmit

#define OWN_SLAVE_ADDRESS_RECEIVE_READ_REQ_ACK        0xA8 //this slave check this address and this address is his
                                                           // address and the master want to read from him ACK
                                                           //(el slave y2ol aywa dh el address bta3y)

#define OWN_SLAVE_ADDRESS_READ_REQ_ARBITRATION_ACK    0xB0 //this slave check this address and this address is his
                                                           // address and the master want to write or read on him and
                                                           // arbitration lost ACK
                                                           //(el slave y2ol aywa dh el address bta3y )
                                                           //(el slave kan mstny yktb 3la el master w el master 5sr)


#define SLAVE_TRANMITTED_DATA_ACK                      0x80 // means that this slave transmitted  data
#define SLAVE_TRANMITTED_DATA_NOTACK                   0xC0 // means that this slave does'nt transmit data




#define SLAVE_TRANSMITTED_LAST_DATA                    0xC8 // means that the last data in slave data
                                                            //register has been transmitted



//////////////////////////////////////////////////functions////////////////////////////////////////////////////////
/*
void I2C_VidInit_Master(void);
void I2C_VidiInit_Slave(void);
void I2C_VidStart(void);
void I2C_VidRepeatedStart(void);
void I2C_VidSendSlaveAddressWithWriteRequest(u8 LOC_u8SlaveAddress);
void I2C_VidSendSlaveAddressWithReadRequest(u8 LOC_u8SlaveAddress);
void I2C_VidWriteByteDataMaster(u8 LOC_u8ByteData);
u8 I2C_VidReadByteDataMaster(void);
void I2C_VidStop(void);
u8 I2C_u8SlaveReadByteData(void);
*/




#endif /* I2C_MASTER_H_ */
