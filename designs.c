/*
 * GccApplication1.c
 *
 * 
 *  Author: Aman
 */ 


#ifndef F_CPU
#define F_CPU 1000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	//DDRC |= (1<<PC0); //Nakes first pin of PORTC as Output
	DDRC = 0xff;
	DDRB= 0xff;
	DDRA = 0xff;
	//DDRD &= ~(1<<PD0);//Makes firs pin of PORTD as Input
	DDRD = 0xff; //Makes all pins of PORTD input
	
	//--------------------- PORTC IS GROUND --------------------------------------
	
	
	while(1) //infinite loop
	{
		
			//begin design 0
			PORTC = (0xff);
			for(int i=0; i<4; i++)
			{
				PORTB = (0xf0);
				PORTA = (0x00);
				PORTD = (0x00);
				_delay_ms(200);
				
				PORTD = (0xf0);
				PORTB = (0x00);
				_delay_ms(200);
				
				
				PORTA = (0x0f);
				PORTD = (0x00);
				_delay_ms(200);
				 
				PORTA = (0xf0);
				_delay_ms(200);
				 
				PORTA = (0xff);
				_delay_ms(200);
				 
				PORTD = (0xf0);
				PORTA = (0xff);
				_delay_ms(200);
				 
				PORTB = (0xf0);
				PORTD = (0xf0);
				PORTA = (0xff);
				_delay_ms(200);
				 
				PORTB = (0xf0);
				PORTD = (0xf0);
				PORTA = (0x0f);
				_delay_ms(200);
				 
				PORTB = (0xf0);
				PORTD = (0xf0);
				PORTA = (0x00);
				_delay_ms(200);
				 
			}
		
 
		
			//begin design 1
			PORTC = (0xff);
			 for(int i=0; i<4; i++)
			{
				PORTB = (0x80);
				PORTD = (0x80);
				PORTA = (0x88);
				_delay_ms(200);
				 
				
				PORTB= (0x40);
				PORTD = (0x40);
				PORTA = (0x44);
				_delay_ms(200);
				 
				
				PORTB= (0x20);
				PORTD = (0x20);
				PORTA = (0x22);
				_delay_ms(200);
				 
				
				PORTB= (0x10);
				PORTD = (0x10);
				PORTA = (0x11);
				_delay_ms(200);
				 
				
				PORTB = (0x30);
				PORTD = (0x30);
				PORTA = (0x33);
				_delay_ms(200);
				 
				
				PORTB = (0x70);
				PORTD = (0x70);
				PORTA = (0x77);
				_delay_ms(200);
				 
				
				PORTB = (0xf0);
				PORTD = (0xf0);
				PORTA = (0xff);
				_delay_ms(200);
				 
				
				PORTB = (0xe0);
				PORTD = (0xe0);
				PORTA = (0xee);
				_delay_ms(200);
				 
				
				PORTB = (0xc0);
				PORTD = (0xc0);
				PORTA = (0xcc);
				_delay_ms(200);
				 
			}
		
 
		
			//begin Design 2
			PORTB = (0xf0);
			PORTD = (0xf0);
			PORTA = (0xff);
			for (int i=0; i<4; i++)
			{
				PORTC = (0x80);
				_delay_ms(100);
				 
				
				PORTC = (0xc0);
				_delay_ms(100);
				 
				PORTC = (0xc2);
				_delay_ms(100);
				 
				PORTC = (0xc3);
				_delay_ms(100);
				 
				PORTC = (0x01);
				_delay_ms(100);
				 
				PORTC = (0x02);
				_delay_ms(100);
				 
				PORTC = (0x40);
				_delay_ms(100);
				 
				PORTC = (0x80);
				_delay_ms(100);
				 
			}
			
	
 
	
			PORTC = (0xff);
			 for(int i=0; i<4; i++)
			{
				PORTB= (0x10);
				PORTD = (0x00);
				_delay_ms(100);
				 
				PORTD = (0x10);
				PORTB= (0x20);
				_delay_ms(100);
				 
				PORTA = (0x01);
				PORTD = (0x20);
				PORTB= (0x40);
				_delay_ms(100);
				 
				PORTA = (0x12);
				PORTD = (0x40);
				PORTB= (0x80);
				_delay_ms(100);
				 
				PORTA = (0x24);
				PORTD = (0x80);
				PORTB= (0x00);
				_delay_ms(100);
				 
				PORTD = (0x00);
				PORTA = (0x48);
				_delay_ms(100);
				 
				PORTA = (0x80);
				_delay_ms(100);
				 
				
				PORTA = (0x48);
				_delay_ms(100);
				 
				PORTA = (0x24);
				PORTD = (0x80);
				_delay_ms(100);
				 
				PORTA = (0x12);
				PORTD = (0x40);
				_delay_ms(100);
				PORTB= (0x80);
				 
				PORTA = (0x01);
				PORTD = (0x20);
				PORTB= (0x40);
				_delay_ms(100);
				 
				PORTA = (0x00);
				PORTD = (0x10);
				PORTB= (0x20);
				_delay_ms(100);
				 
				PORTD = (0x00);
				PORTB= (0x10);
				_delay_ms(100);
				 
				
				
				//PORTC = (0x00);
			}
	
 
	
			PORTD = (0xff);
			PORTD = (0x00);
			 for(int i=0; i<4; i++)
			{
				PORTD = (0x20);
				PORTB= (0x10);
				PORTA = (0x84);
				_delay_ms(100);
				 
				PORTD = (0x20);
				PORTB= (0x20);
				PORTA = (0x44);
				_delay_ms(100);
				 

				PORTD = (0x40);
				PORTB= (0x40);
				PORTA = (0x22);
				_delay_ms(100);
				 

				PORTD = (0x40);
				PORTB= (0x80);
				PORTA = (0x12);
				_delay_ms(100);
				 

				PORTD = (0xc0);
				PORTB= (0x00);
				PORTA = (0x03);
				_delay_ms(100);
				 
				PORTD = (0x30);
				PORTA = (0x0C);
				_delay_ms(100);
				 
				//PORTA = (0x00);
			}
	
 
	
			//begin Design 5
			PORTC = (0xff);
			 for(int i=0; i<4; i++)
			{
				PORTB = (0x10);
				PORTA = (0x00);
				PORTD = (0x00);
				_delay_ms(100);
				 
				PORTB = (0x30);
				_delay_ms(100);
				 
				PORTB = (0x70);
				_delay_ms(100);
				 
				PORTB = (0xf0);
				_delay_ms(100);
				 
				PORTD = (0x80);
				PORTB = (0xf0);
				_delay_ms(100);
				 
				PORTD = (0x80);
				PORTB = (0xf0);
				PORTA = (0x08);
				_delay_ms(100);
				 
				PORTD = (0x80);
				PORTB = (0xf0);
				PORTA = (0x88);
				_delay_ms(100);
				 
				PORTD = (0x80);
				PORTB = (0xf0);
				PORTA = (0xC8);
				_delay_ms(100);
				 
				PORTD = (0x80);
				PORTB = (0xf0);
				PORTA = (0xE8);
				_delay_ms(100);
				 
				PORTD = (0x80);
				PORTB = (0xf0);
				PORTA = (0xf8);
				_delay_ms(100);
				 
				PORTD = (0x80);
				PORTB = (0xf0);
				PORTA = (0xf9);
				_delay_ms(100);
				 
				PORTD = (0x90);
				PORTB = (0xf0);
				PORTA = (0xf9);
				_delay_ms(100);
				 
				PORTD = (0xB0);
				PORTB = (0xf0);
				PORTA = (0xf9);
				_delay_ms(100);
				 
				PORTD = (0xf0);
				PORTB = (0xf0);
				PORTA = (0xf9);
				_delay_ms(100);
				 
				PORTD = (0xf0);
				PORTB = (0xf0);
				PORTA = (0xfD);
				_delay_ms(100);
				 
				PORTD = (0xf0);
				PORTB = (0xf0);
				PORTA = (0xff);
				_delay_ms(100);
				 
				PORTD = (0xd0);
				PORTB = (0xf0);
				PORTA = (0xff);
				_delay_ms(100);
				 
				PORTD = (0x90);
				PORTB = (0xf0);
				PORTA = (0xff);
				_delay_ms(100);
				 
				PORTD = (0x90);
				PORTB = (0xf0);
				PORTA = (0xfb);
				_delay_ms(100);
				 
				PORTD = (0x90);
				PORTB = (0xf0);
				PORTA = (0xf9);
				_delay_ms(100);
				 
				PORTD = (0x90);
				PORTB = (0xf0);
				PORTA = (0xf8);
				_delay_ms(100);
				 
				PORTD = (0x80);
				PORTB = (0xf0);
				PORTA = (0xf8);
				_delay_ms(100);
				 
				PORTD = (0x80);
				PORTB = (0xe0);
				PORTA = (0xf8);
				_delay_ms(100);
				 
				PORTD = (0x80);
				PORTB = (0xc0);
				PORTA = (0xf8);
				_delay_ms(100);
				 
				PORTD = (0x80);
				PORTB = (0x80);
				PORTA = (0xf8);
				_delay_ms(100);
				 
				PORTD = (0x80);
				PORTB = (0x00);
				PORTA = (0xf8);
				_delay_ms(100);
				 
				PORTD = (0x00);
				PORTA = (0xf8);
				_delay_ms(100);
				 
				PORTA = (0xf0);
				_delay_ms(100);
				 
				PORTA = (0x70);
				_delay_ms(100);
				 
				PORTA = (0x30);
				_delay_ms(100);
				 
				PORTA = (0x10);
				_delay_ms(100);
				 
			}
	
 
	
			//begin Design 6
			PORTA = (0x00);
			PORTC = (0x00);
			PORTD = (0x00);
			 for(int i=0; i<4; i++)
			{
				for(int j=0; j<3; j++)
				{
					PORTC = (0x01);
					PORTD = (0x00);
					PORTB = (0x00);
					PORTA = (0x80);
					_delay_ms(100);
					 
					PORTC = (0x03);
					PORTD = (0x00);
					PORTA = (0xcc);
					_delay_ms(100);
					 
					PORTC = (0x43);
					PORTD = (0xE0);
					PORTA = (0xee);
					_delay_ms(100);
					 
					PORTC = (0xC3);
					PORTD = (0xf0);
					PORTB = (0xf0);
					PORTA = (0xff);
					_delay_ms(100);
					 
					PORTC = (0x43);
					PORTD = (0xE0);
					PORTB = (0xE0);
					PORTA = (0xee);
					_delay_ms(100);
					 
					PORTC = (0x03);
					PORTD = (0x00);
					PORTA = (0xcc);
					_delay_ms(100);
					 
					PORTC = (0x01);
					PORTD = (0x00);
					PORTA = (0x80);
					_delay_ms(100);
					 
				}
				PORTC = (0x01);
				PORTD = (0x00);
				PORTB = (0x00);
				PORTA = (0x80);
				_delay_ms(100);
				 
				PORTC = (0x03);
				PORTD = (0x00);
				PORTA = (0xcc);
				_delay_ms(100);
				 
				PORTC = (0x43);
				PORTD = (0xE0);
				PORTA = (0xee);
				_delay_ms(100);
				 
				PORTC = (0xC3);
				PORTD = (0xf0);
				PORTB = (0xf0);
				PORTA = (0xff);
				_delay_ms(100);
				 
				PORTC = (0xc2);
				PORTB = (0x70);
				PORTD = (0x70);
				PORTA = (0x07);
				_delay_ms(100);
				 
				PORTC = (0xc0);
				PORTB = (0x30);
				PORTD = (0x30);
				PORTA = (0x00);
				_delay_ms(100);
				 
				PORTC = (0x80);
				PORTB = (0x10);
				PORTD = (0x00);
				_delay_ms(100);
				 
				for(int j=0; j<3; j++)
				{
					PORTC = (0x80);
					PORTB = (0x10);
					PORTD = (0x00);
					PORTA = (0x00);
					_delay_ms(100);
					 
					PORTC = (0xc0);
					PORTB = (0x30);
					PORTD = (0x30);
					_delay_ms(100);
					 
					PORTC = (0xc2);
					PORTB = (0x70);
					PORTD = (0x70);
					PORTA = (0x07);
					_delay_ms(100);
					 
					PORTC = (0xc3);
					PORTB = (0xf0);
					PORTD = (0xf0);
					PORTA = (0xff);
					_delay_ms(100);
					 
					PORTC = (0xc2);
					PORTB = (0x70);
					PORTD = (0x70);
					PORTA = (0x07);
					_delay_ms(100);
					 
					PORTC = (0xc0);
					PORTB = (0x30);
					PORTD = (0x30);
					PORTA = (0x00);
					_delay_ms(100);
					 
					PORTC = (0x80);
					PORTB = (0x10);
					PORTD = (0x00);
					_delay_ms(100);
					 
				}

			}
	
 
	
			//begin Design 7
			 for(int i=0; i<4; i++)
			{
				PORTC = (0xc0);
				PORTD = (0xf0);
				PORTB = (0xf0);
				PORTA = (0x00);
				_delay_ms(200);
				 
				
				PORTC = (0xc0);
				PORTD = (0xf0);
				PORTB = (0x00);
				PORTA = (0x0f);
				_delay_ms(200);
				 
				
				PORTC = (0xc0);
				PORTD = (0x00);
				PORTB = (0x00);
				PORTA = (0xff);
				_delay_ms(200);
				 
				
				PORTC = (0x42);
				PORTD = (0xf0);
				PORTB = (0xf0);
				PORTA = (0x00);
				_delay_ms(200);
				 
				
				PORTC = (0x42);
				PORTD = (0xf0);
				PORTB = (0x00);
				PORTA = (0x0f);
				_delay_ms(200);
				 
				
				PORTC = (0x42);
				PORTD = (0x00);
				PORTB = (0x00);
				PORTA = (0xff);
				_delay_ms(200);
				 
				
				PORTC = (0x03);
				PORTD = (0xf0);
				PORTB = (0xf0);
				PORTA = (0x00);
				_delay_ms(200);
				 
				
				PORTC = (0x03);
				PORTD = (0xf0);
				PORTB = (0x00);
				PORTA = (0x0f);
				_delay_ms(200);
				 
				
				PORTC = (0x03);
				PORTD = (0x00);
				PORTB = (0x00);
				PORTA = (0xff);
				_delay_ms(200);
				 

			}
	
 
	
			//begin Design 8
			 for(int i=0; i<4; i++)
			{
				for (int i=0; i <4; i++)
				{
					if (i==0)
					PORTC=0x80;
					else if (i==1)
					PORTC=0xc0;
					else if (i==2)
					PORTC=0xc2;
					else if (i==3)
					PORTC=0xc3;
					//else if (i=4)PORTC=0x81;
					//else if (i=5)PORTC=0x82;
					//else if (i=6)PORTC=0xc0;
					//else if (i=7)PORTC=0xc1;
					//else if (i=8)PORTC=0xc2;
					PORTD = (0x60);
					PORTB = (0x10);
					PORTA = (0x06);
					_delay_ms(100);
					 
					
					PORTD = (0x60);
					PORTB = (0x20);
					PORTA = (0x06);
					_delay_ms(100);
					 
					
					PORTD = (0x60);
					PORTB = (0x40);
					PORTA = (0x06);
					_delay_ms(100);
					 
					
					PORTD = (0x60);
					PORTB = (0x80);
					PORTA = (0x06);
					_delay_ms(100);
					 
					
					PORTD = (0xe0);
					PORTB = (0x00);
					PORTA = (0x06);
					_delay_ms(100);
					 
					
					PORTD = (0x60);
					PORTB = (0x00);
					PORTA = (0x0e);
					_delay_ms(100);
					 
					
					PORTD = (0x60);
					PORTB = (0x00);
					PORTA = (0x06);
					_delay_ms(100);
					 
					
					PORTD = (0x60);
					PORTB = (0x00);
					PORTA = (0x86);
					_delay_ms(100);
					 
					
					PORTD = (0x60);
					PORTB = (0x00);
					PORTA = (0x46);
					_delay_ms(100);
					 
					
					PORTD = (0x60);
					PORTB = (0x00);
					PORTA = (0x26);
					_delay_ms(100);
					 
					
					PORTD = (0x60);
					PORTB = (0x00);
					PORTA = (0x16);
					_delay_ms(100);
					 
					
					PORTD = (0x60);
					PORTB = (0x00);
					PORTA = (0x07);
					_delay_ms(100);
					 
					
					PORTD = (0x70);
					PORTB = (0x00);
					PORTA = (0x06);
					_delay_ms(100);
					 
				}
			}
	}
}

