/* 
 * File:   main.c
 * Author: eduard.soltuzu
 *
 * Created on October 2, 2015, 10:54 AM
 */
 
#include <stdio.h>
#include "crc.h"


int main()
{
    uint8_t ModBus_message[LengModBusMsg]={0x01,0x03,0x00,0x04,0x00,0x04};
	uint16_t CRC_result;
	
    CRC_result = CRC16 (( uint8_t* )ModBus_message, 6 );
    
	printf("CRC_result = 0x%X\r\n",CRC_result);
	
    uint8_t Hi = CRC_result >> 8;
    uint8_t Lo = CRC_result & 0x00FF;

    ModBus_message[CRC_pos_Hi] = Hi;
    ModBus_message[CRC_pos_Lo] = Lo;

	int i=0;
    for(i=0;i<8;i++)
    {
        printf("ModBus_message[%d] = %X\r\n",i,ModBus_message[i]);
    }

    return 1;

    return 0;

}

