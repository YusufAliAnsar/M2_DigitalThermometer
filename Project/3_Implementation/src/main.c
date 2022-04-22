/*
 * temp.c
 *
 * Created: 4/20/2022 1:21:07 PM
 *  Author: ASUS
 */ 
#ifndef __AVR_ATmega32__
#define __AVR_ATmega32__
#endif
#include <avr/io.h>              // This header file includes the appropriate Input/output definitions for the device
#include <util/delay.h>         // to use delay function we need to include this library
#include <stdlib.h>             // we'll be using itoa() function to convert integer to character array that resides in this library

#define F_CPU 1000000         // giving name “enable”  to 5th pin of PORTD, since it Is connected to LCD enable pin
#include <util/delay.h>       //header to enable delay function in program
#include <stdlib.h>

#define enable            5    //giving name “enable”  to 5th pin of PORTD, since it Is connected to LCD enable pin
#define registerselection 6    //giving name “registerselection” to 6th pin of PORTD, since is connected to LCD RS pin

void send_a_command(unsigned char command);        //Clear Screen 0x01 = 00000001
void send_a_character(unsigned char character);    //telling lcd we are using 8bit command /data mode
void send_a_string(char *string_of_characters);    //LCD SCREEN ON and courser blinking

int main(void)
{
	DDRB = 0xFF;                              //putting portB and portD as output pins
	DDRA = 0;                                 //Taking portA as input.
	DDRD = 0xFF;
	_delay_ms(50);                            //giving delay of 50ms
	
	ADMUX |=(1<<REFS0)|(1<<REFS1);            //setting the reference of ADC
	ADCSRA |=(1<<ADEN)|(1<<ADATE)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);       //enabling the ADC, setting free running mode, setting prescalar 128
	
	int16_t COUNTA = 0;
	char SHOWA [3];
	

	send_a_command(0x01); //Clear Screen 0x01 = 00000001
	_delay_ms(50);         //giving delay of 50ms
	send_a_command(0x38);  //Clear Screen 0x01 = 00000001
	_delay_ms(50);         //giving delay of 50ms
	send_a_command(0b00001111);   //LCD SCREEN ON and courser blinking
	_delay_ms(50);                //giving delay of 50ms
	
	ADCSRA |=(1<<ADSC);           //starting the ADC conversion
	while(1) 
	{
		COUNTA = ADC/4;       //since the resolution (2.56/2^10 = 0.0025) is 2.5mV there will be an increment of 4 for every 10mV input, that means for every degree raise there will be increment of 4 in digital value. So to get the temperature we have to divide ADC output by four.
		send_a_string ("YUSUF");  //displaying name
		send_a_command(0x80 + 0x40 + 0);  // shifting cursor  to 1st  shell  of second line
		send_a_string ("Temp(C)=");       //displaying name
		send_a_command(0x80 + 0x40 + 8);  // shifting cursor  to 9st  shell  of second line
		itoa(COUNTA,SHOWA,10);            //command for putting variable number in LCD(variable number, in which character to replace, which base is variable(ten here as we are counting number in base10))
		send_a_string(SHOWA);            //telling the display to show character(replaced by variable number) of first person after positioning the courser on LCD
		send_a_string ("      ");
		send_a_command(0x80 + 0);        //retuning to first line first shell
		
	}
}

void send_a_command(unsigned char command)
{
	PORTB = command;                 //putting 0 in RS to tell lcd we are sending command
	PORTD &= ~ (1<<registerselection);
	PORTD |= 1<<enable;              //telling lcd to receive command /data at the port
	_delay_ms(20);
	PORTD &= ~1<<enable;             //telling lcd we completed sending data
	PORTB = 0;
}

void send_a_character(unsigned char character)
{
	PORTB = character;
	PORTD |= 1<<registerselection;   //telling LCD to start receiving command/data
	PORTD |= 1<<enable;             //telling LCD we are sending data not commands
	_delay_ms(20);
	PORTD &= ~1<<enable;           //telling lcd we completed sending data/command
	PORTB = 0;
}
void send_a_string(char *string_of_characters)
{
	while(*string_of_characters > 0)
	{
		send_a_character(*string_of_characters++);
	}
}
