#ifndef BMP180_H
#define BMP180_H

#ifdef __cplusplus
extern "C" {
#endif

#include "sensor.h"

/*---------------------------------------------------------------------------*/

#define bmp180_i2c_addr = 0x77 << (uint16_t)1;

extern struct sensor_t bmp180;

/*---------------------------------------------------------------------------*/

void bmp180_struct_init(void);
void bmp180_init(void);
void bmp180_get_data(void);

/*---------------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif