/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  SSP_Types_H
 *       Module:  -
 *
 *  Description:   header for the SSP types     
 *  
 *********************************************************************************************************************/
#ifndef  SSP_Types_H
#define  SSP_Types_H

/**********************************************************************************************************************
 * INCLUDES
 **********************************************************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "USART_interface.h"

#define FEND 0xC0
#define FESC 0xDB

typedef enum {
	PING,
	INIT,
	ACK,
	NAK,
	GET,
	PUT,
	READ,
	WRITE,
	ID,
	//Custom 10-52
	ADDRT=54,
	DELRT,
	GETRT
}SSP_Type_t;
	
typedef struct {
	u8 Dest_Add;
	u8 Src_Add;
	SSP_Type_t SSP_Type;
	u8 Length;
	u8 SSP_CRC[2];
	u8 SSP_Data[];
}SSP_Struct_t;
 
void Send_SSPFrame(USART_No_t SSP_USART); 
void Receive_SSPFrame(USART_No_t SSP_USART);

void SSP_DataDecode(void); 
u16 CRC_SSPCalc(void);




#endif
