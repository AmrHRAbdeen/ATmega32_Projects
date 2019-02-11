/**************************************************/
/* Author      :  amr Abdeen                      */
/* Date        : 7/2/2019                         */
/* Description :                                  */
/*                                                */
/*                                                */
/**************************************************/

#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "SSD_interface.h"
#include "SSD_config.h"
#include "SSD_private.h"


u8 SSD_u8SetOn(u8 Copy_u8SsdNb)
{
	// check input 
	 u8 local_ErrorState = ERROR_OK;
	 u8 Local_loopIndex = SSD_u8_LOOP_START_INDEX;
	 u8 Local_oldValue = SSD_Au8SetDefaultValues[Copy_u8SsdNb-ARRAY_START_INDEX];

  if(Copy_u8SsdNb > SSD_NO_OF_SSD || Copy_u8SsdNb < ARRAY_START_INDEX ){
    local_ErrorState = ERROR_NOK;
  }else {
    switch(SSD_Au8SetSsdTypes[Copy_u8SsdNb -ARRAY_START_INDEX])
    {
      case SSD_u8_CATHODE :
      		// set enable pin = 0 ;
            	DIO_u8SetPinValue(SSD_Au8SetPinConn[Copy_u8SsdNb-ARRAY_START_INDEX][SSD_u8_MAX_PINS -ARRAY_START_INDEX], DIO_u8_PIN_LOW);
             // set pins default value
             for (Local_loopIndex = SSD_u8_LOOP_START_INDEX; Local_loopIndex <SSD_u8_LOOP_END; Local_loopIndex++){
             	DIO_u8SetPinValue(SSD_Au8SetPinConn[Copy_u8SsdNb-ARRAY_START_INDEX][Local_loopIndex], SSD_Au8SsdNumbers[Local_oldValue][Local_loopIndex]);
             }
             break;
      case SSD_u8_ANODE :
             // set enable pin = 0 ;
            	DIO_u8SetPinValue(SSD_Au8SetPinConn[Copy_u8SsdNb-ARRAY_START_INDEX][SSD_u8_MAX_PINS - ARRAY_START_INDEX], DIO_u8_PIN_HIGH);
             // set pins default value
             for (Local_loopIndex = SSD_u8_LOOP_START_INDEX; Local_loopIndex <SSD_u8_LOOP_END; Local_loopIndex++){
             	DIO_u8SetPinValue(SSD_Au8SetPinConn[Copy_u8SsdNb-ARRAY_START_INDEX][Local_loopIndex], SSD_Au8SsdNumbersAnode[Local_oldValue][Local_loopIndex]);
             }
             break;
       default :
        local_ErrorState = ERROR_NOK;
    }

  }
  SSD_Au8SsdStatus[Copy_u8SsdNb-ARRAY_START_INDEX]=SSD_STATUS_ON;
  return local_ErrorState;

}
/**********************************************************************/

u8 SSD_u8SetOff(u8 Copy_u8SsdNb){
	// check input
		 u8 local_ErrorState = ERROR_OK;

	  if(Copy_u8SsdNb > SSD_NO_OF_SSD || Copy_u8SsdNb < ARRAY_START_INDEX )
	  {
	    local_ErrorState = ERROR_NOK;
	  }
	  else
	  {
	    switch(SSD_Au8SetSsdTypes[Copy_u8SsdNb -ARRAY_START_INDEX])
	    {
	      case SSD_u8_CATHODE :
	      		// set enable pin = 0 ;
	            	DIO_u8SetPinValue(SSD_Au8SetPinConn[Copy_u8SsdNb-ARRAY_START_INDEX][SSD_u8_MAX_PINS -ARRAY_START_INDEX], DIO_u8_PIN_HIGH);

	             break;
	      case SSD_u8_ANODE :
	             // set enable pin = 0 ;
	            	DIO_u8SetPinValue(SSD_Au8SetPinConn[Copy_u8SsdNb-ARRAY_START_INDEX][SSD_u8_MAX_PINS - ARRAY_START_INDEX], DIO_u8_PIN_LOW);
	             // set pins default value

	             break;
	       default :
	        local_ErrorState = ERROR_NOK;
	    }

	  }
	  SSD_Au8SsdStatus[Copy_u8SsdNb-ARRAY_START_INDEX]=SSD_STATUS_OFF;
	  return local_ErrorState;


}


/*********************************************************************/


u8 SSD_u8SetValue(u8 Copy_u8SsdNb ,u8 Copy_u8SsdValue){

	 u8 local_ErrorState = ERROR_OK;
	 u8 Local_loopIndex = SSD_u8_LOOP_START_INDEX;

	if((SSD_Au8SsdStatus[Copy_u8SsdNb - ARRAY_START_INDEX]== SSD_STATUS_OFF) || (Copy_u8SsdNb > SSD_NO_OF_SSD) || (Copy_u8SsdNb < ARRAY_START_INDEX) || (Copy_u8SsdValue < SSD_u8_ZERO) || (Copy_u8SsdValue > SSD_u8_SEVNT))
	{
		 local_ErrorState = ERROR_NOK;
	}

	else

	{

		 switch(SSD_Au8SetSsdTypes[Copy_u8SsdNb -ARRAY_START_INDEX])
		    {
		      case SSD_u8_CATHODE :

		             // set pins default value
		             for (Local_loopIndex = SSD_u8_LOOP_START_INDEX; Local_loopIndex <SSD_u8_LOOP_END; Local_loopIndex++){
		             	DIO_u8SetPinValue(SSD_Au8SetPinConn[Copy_u8SsdNb-ARRAY_START_INDEX][Local_loopIndex], SSD_Au8SsdNumbers[Copy_u8SsdValue][Local_loopIndex]);
		             }
		             break;
		      case SSD_u8_ANODE :

		             // set pins default value
		             for (Local_loopIndex = SSD_u8_LOOP_START_INDEX; Local_loopIndex <SSD_u8_LOOP_END; Local_loopIndex++){
		             	DIO_u8SetPinValue(SSD_Au8SetPinConn[Copy_u8SsdNb-ARRAY_START_INDEX][Local_loopIndex], SSD_Au8SsdNumbersAnode[Copy_u8SsdValue][Local_loopIndex]);
		             }
		             break;
		       default :
		        local_ErrorState = ERROR_NOK;
		    }

		 SSD_Au8SetDefaultValues[Copy_u8SsdNb-ARRAY_START_INDEX]=Copy_u8SsdValue;


	}
	return local_ErrorState;
}
