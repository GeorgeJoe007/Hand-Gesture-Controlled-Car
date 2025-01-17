/*
 * TIM0_HW.h
 *
 *  Created on: Feb 5, 2023
 *      Author: Lenovo
 */

#ifndef MCAL_TIMS_INCLUDES_TIMS_HW_H_
#define MCAL_TIMS_INCLUDES_TIMS_HW_H_

#include "TIMS_Types.h"


#define TIM0 		((volatile TIM0_Reg*)0x52)
#define TIM1 		((volatile TIM1_Reg*)0x46)
#define TIM2		((volatile TIM2_Reg*)0x43)

#define TIMSK		((volatile TIMSK_Reg*)0x59)

#define ON  0
#define OFF 1
/*
 * ****************	TIMER 0		****************
 * */
#define TIMER0_NORMAL_MODE				0
#define TIMER0_CTC_MODE					1
#define TIMER0_PWM_PHASECORRECT_MODE	2
#define TIMER0_PWM_FAST_MODE			3

#define TIMER0_BITMASK_PRESCALER 		0xf8
#define TIMER0_NO_PRESCALER 			1
#define TIMER0_8_PRESCALER 				2
#define TIMER0_64_PRESCALER				3
#define TIMER0_256_PRESCALER			4
#define TIMER0_1024_PRESCALER			5

#define TIMER0_EXTERNAL_SOURCE_FALLING	6
#define TIMER0_EXTERNAL_SOURCE_RISING	7

#define OC0_PIN_DISCONNECTED			0
#define OC0_PIN_TOGGLE					1
#define OC0_PIN_CLEAR					2
#define OC0_PIN_SET						3

#define OC0_PIN_NON_INVERTING			2
#define OC0_PIN_INVERTING				3

/*
 * ****************	TIMER 1		****************
 * */
#define TIMER1_NORMAL_MODE				0
#define TIMER1_CTC_MODE					1
#define TIMER1_PWM_PHASECORRECT_MODE	2
#define TIMER1_PWM_FAST_MODE			3

#define TIMER1_BITMASK_PRESCALER 		0xf8
#define TIMER1_NO_PRESCALER 			1
#define TIMER1_8_PRESCALER 				2
#define TIMER1_64_PRESCALER				3
#define TIMER1_256_PRESCALER			4
#define TIMER1_1024_PRESCALER			5

#define TIMER1_NORMAL_WAVEFORM				0
#define TIMER1_PHASECORRECT_8BIT			1
#define TIMER1_PHASECORRECT_9BIT			2
#define TIMER1_PHASECORRECT_10BIT			3
#define TIMER1_CTC_TOP_OCR1A				4
#define TIMER1_FASTPWM_8BIT					5
#define TIMER1_FASTPWM_9BIT					6
#define TIMER1_FASTPWM_10BIT				7
#define TIMER1_PHASE_FREQ_TOP_ICR1			8
#define TIMER1_PHASE_FREQ_TOP_OCR1A			9
#define TIMER1_PHASECORRECT_TOP_ICR1		10
#define TIMER1_PHASECORRECT_TOP_OCR1A		11
#define TIMER1_CTC_TOP_ICR1					12
#define TIMER1_FASTPWM_TOP_ICR1				13
#define TIMER1_FASTPWM_TOP_OCR1A			14


#define TIMER1_EXTERNAL_SOURCE_FALLING	6
#define TIMER1_EXTERNAL_SOURCE_RISING	7

#define OC1_PINS_DISCONNECTED			0

#define OC1_PINS_TOGGLE					1
#define OC1_PINS_CLEAR					2
#define OC1_PINS_SET					3

//#define OC1A_PIN_TOGGLE					1
#define OC1_PINS_NONINVERTING			2
#define OC1_PINS_INVERTING				3


/*
 * ****************	TIMER 2		****************
 * */
#define TIMER2_NORMAL_MODE				0
#define TIMER2_CTC_MODE					1
#define TIMER2_PWM_PHASECORRECT_MODE	2
#define TIMER2_PWM_FAST_MODE			3

#define TIMER2_BITMASK_PRESCALER 		0xf8
#define TIMER2_NO_PRESCALER 			1
#define TIMER2_8_PRESCALER 				2
#define TIMER2_32_PRESCALER				3
#define TIMER2_64_PRESCALER				4
#define TIMER2_128_PRESCALER			5

#define TIMER2_256_PRESCALER			6
#define TIMER2_1024_PRESCALER			7

#define OC2_PIN_DISCONNECTED			0
#define OC2_PIN_TOGGLE					1
#define OC2_PIN_CLEAR					2
#define OC2_PIN_SET						3

#define OC2_PIN_FASTPWM_NON_INVERTING			2
#define OC2_PIN_FASTPWM_INVERTING				3

#define OC2_PIN_PHASECORRECTPWM_NON_INVERTING			2
#define OC2_PIN_PHASECORRECTPWM_INVERTING				3



#endif /* MCAL_TIMS_INCLUDES_TIMS_HW_H_ */
