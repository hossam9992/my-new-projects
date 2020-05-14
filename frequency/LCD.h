/*
 *
 *
 */

#ifndef LCD_H_				
#define LCD_H_

#define F_CPU 16000000UL					
#include <avr/io.h>						
#include <util/delay.h>					/* Include Delay header file */

#define LCD_Data_Dir DDRB				/* Define LCD data port direction */
#define LCD_Command_Dir DDRC			/* Define LCD command port direction register */
#define LCD_Data_Port PORTB				/* Define LCD data port */
#define LCD_Command_Port PORTC			/* Define LCD data port */
#define EN PC2							/* Define Enable signal pin */
#define RW PC1							/* Define Read/Write signal pin */
#define RS PC0							/* Define Register Select (data reg./command reg.) signal pin */

void LCD_Command (char);				/* LCD command write function */
void LCD_Char (char);					/* LCD data write function */
void LCD_Init (void);					/* LCD Initialize function */
void LCD_String (char*);				/* Send string to LCD function */
void LCD_String_xy (char,char,char*);	/* Send row, position and string to LCD function */
void LCD_Clear (void);					/* LCD clear function */


#endif									/* LCD_16x2_H_FILE_H_ */