/* 
 * File:   crc.h
 * Author: eduard.soltuzu
 *
 * Created on October 2, 2015, 10:48 AM
 */

#ifndef CRC_H
#define CRC_H

#include <stdint.h>

#define LengModBusMsg 8
#define CRC_pos_Hi 6
#define CRC_pos_Lo 7


//
// 		The CRC16 function
// 		pucFrame --> data for CRC calculation
//		usLen 	 --> length of data
 
uint16_t CRC16( uint8_t * pucFrame, uint16_t usLen );




#endif