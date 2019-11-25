/*
 * Test.c
 *
 * Created: 22.11.2019 16:27:59
 * Author : oystmol
 */ 

// 7E 00 04 08 01 49 4D 60 msg to get imei

#define F_CPU 16000000UL
#include "USART.h"
#include "xbee.h"
#include "RN2483A.h"
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <stdlib.h>




int main(void){
	DDRD |= (1<<PD3);
	USART_init();
	USART_init2();
	//lora_init();
    while (1) 
    {
		lora_send_command("sys get hweui");
		//lora_receive_response();
		 _delay_ms(500);
    }
	return 0;
}


