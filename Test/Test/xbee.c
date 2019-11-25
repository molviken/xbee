/*
 * xbee.c
 *
 * Created: 23.11.2019 13:15:11
 *  Author: oystmol
 */ 
#include <string.h>
#include "xbee.h"
#include "USART.h"
#include "util_functions.h"

void XBEE_send_command(const char * str){
	size_t str_len = strlen(str);
	uint8_t cmd[str_len/2];
	hex_decode(str, str_len,cmd);
	for (int i = 0; i<str_len/2; i++){
		USART_transmit(cmd[i]);
	}	
}

void XBEE_receive_response(){
	char rec, msb, lsb;
	char *buf;
	rec = USART_receive();
	USART_transmit2(rec);
// 	if (rec == 0x7E){
// 		msb = USART_receive();
// 		lsb = USART_receive();
// 		for (uint8_t i = 0; i<lsb; i++){
// 			buf[i] = USART_receive();
// 		}
// 	}
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