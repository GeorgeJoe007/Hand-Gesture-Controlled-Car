/*
 * LCD_Private.h
 *
 *  Created on: Sep 7, 2021
 *      Author: gerges
 */

#ifndef LCD_PRIVATE_H_
#define LCD_PRIVATE_H_

#define FUNCTION_SET_8BITS_2LINES     0b00111000
#define FUNCTION_SET_8BITS_1LINES     0b00110100

#define FUNCTION_SET_4BITS_2LINES      0b00101000
#define FUNCTION_SET_4BITS_1LINES      0b00100100

#define DISPLAY_ON_CURSOR_BLINKING     0b00001111
#define DISPLAY_ON_CURSOR_NOBLINKING   0b00001110
#define DISPLAY_ON_NOCURSOR            0b00001100
#define DISPLAY_OFF                    0b00001000

#define ENTRY_MODE_SET_INCREASE        0b00000110
#define ENTRY_MODE_SET_DECREASE        0b00000100


#endif /* LCD_PRIVATE_H_ */
