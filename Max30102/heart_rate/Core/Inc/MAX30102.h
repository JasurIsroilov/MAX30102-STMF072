/*
 * MAX30102.h
 *
 *  Created on: Jul 23, 2021
 *      Author: woot_
 */

#ifndef INC_MAX30102_H_
#define INC_MAX30102_H_

#define MAX30102_INTERRUPT_STATUS_ALMOST_FULL 0x80
#define MAX30102_INTERRUPT_STATUS_NEW_FIFO_DATA 0x40
#define MAX30102_INTERRUPT_STATUS_ALC_OVF 0x20
#define MAX30102_INTERRUPT_STATUS_PROX_INT 0x10
#define MAX30102_INTERRUPT_STATUS_TEMPERATURE_READY 0x02
#define MAX30102_INTERRUPT_STATUS_POWER_READY 0x01


typedef struct samplestruct
{
    uint32_t red;
    uint32_t iRed;
} SAMPLE;

void max30102_init();
uint8_t max30102_getUnreadSampleCount();
void max30102_getFIFO(SAMPLE *data, uint8_t sampleCount);
uint8_t max30102_getStatus();
// float max30102_getTemperature();
void max30102_OFF();
void max30102_ON();

void max30102_cal();
uint8_t max30102_getHeartRate();
uint8_t max30102_getSpO2();
int16_t max30102_getDiff();


#endif /* INC_MAX30102_H_ */
