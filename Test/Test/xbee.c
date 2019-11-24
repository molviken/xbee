/*
 * xbee.c
 *
 * Created: 23.11.2019 13:15:11
 *  Author: oystmol
 */ 
#include "xbee.h"
#include "USART.h"

void XBEE_send_command(char * str){
	int str_len = sizeof(str)/sizeof(str[0]);
	uint8_t cmd[str_len];
	for (int i = 0; i<str_len; i++){
		USART_transmit(cmd[i]);
	}	
}


// char* XBEE_generate_AT_STRING(char cmd[2], uint8_t size_of_cmd){
// 	struct AT_CMD temp;
// 	temp.CMD1st = (uint8_t)cmd[0];
// 	temp.CMD2nd = (uint8_t)cmd[1];
// 	temp.start = 0x7E; temp.frame_type = 0x08; temp.msb = 0x00; temp.lsb = size_of_cmd; temp.frame_id = 0x01;
// 	temp.checksum = XBEE_generate_checksum()
// 	
// 	return temp;
// }

// char* XBEE_generate_checksum(AT_CMD cmd){
	
//}