#ifndef XBEE_H_
#define XBEE_H_

#include <avr/io.h>

#define GET_IMEI XBEE_send_command("7E00040801494D60")



void XBEE_receive_response();
void XBEE_send_command(const char * str);

struct AT_CMD{
	uint8_t start;
	uint8_t msb, lsb;
	uint8_t frame_type;
	uint8_t frame_id;
	uint8_t CMD1st;
	uint8_t CMD2nd;
	uint8_t checksum;
	uint8_t param;
}AT_CMD;



#endif /* XBEE_H_ */