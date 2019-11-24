/*
 * Test.c
 *
 * Created: 22.11.2019 16:27:59
 * Author : oystmol
 */ 

// 7E 00 04 08 01 49 4D 60 msg to get imei

#define F_CPU 8000000UL
#include "USART.h"
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <stdlib.h>

#include "xbee.h"
#include "util_functions.h"


int main(void){
	
	USART_init();
	char msg[] = "7E00040801494D60";
    while (1) 
    {
		XBEE_send_command(msg);
		 _delay_ms(100);
    }
	return 0;
}


