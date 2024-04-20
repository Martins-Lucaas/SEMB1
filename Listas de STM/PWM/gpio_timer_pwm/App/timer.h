/*
 * hw_timer.h
 *
 *  Created on: Mar 26, 2024
 *      Author: danie
 */

#ifndef TIMER_H_
#define TIMER_H_

void timer_start(int tim_id, int mode);
void timer_attach_callback(int tim_id, void (*callback)(void));

void timer_pwm_start(int tim_id, int chn, int mode);

void timer_pwm_duty(int tim_id, int chn, int duty);

#endif /* TIMER_H_ */
