/*
 * digital_io.h
 *
 *  Created on: Mar 26, 2024
 *      Author: danie
 */

#ifndef DIGITAL_IO_H_
#define DIGITAL_IO_H_

enum pin_value {
	LOW = 0,
	HIGH
};

int digitalRead(int pin);
void digitalWrite(int pin, int value);


#endif /* DIGITAL_IO_H_ */
