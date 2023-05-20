/*
 * DHT.h
 *
 *  Created on: Jun 28, 2020
 *      Author: Controllerstech.com
 */

#ifndef DHT_H_
#define DHT_H_

typedef struct
{
	float Temperature;
	float Humidity;
}DHT_DataTypedef;

__STATIC_INLINE void delay(volatile uint32_t microseconds);

void DHT_GetData (DHT_DataTypedef *DHT_Data);

#endif /* INC_DHT_H_ */
