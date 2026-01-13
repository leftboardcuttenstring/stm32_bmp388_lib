#ifndef BMP180_H
#define BMP180_H

#ifdef __cplusplus
extern "C" {
#endif

#include "sensor.h"
#include "stdint.h"
#include "stm32f4xx_hal.h"

/*--Defines------------------------------------------------------------------*/

#define bmp180_addr 0x77 << (uint16_t)1
#define bmp180_start_measurement_flag_register 0xF4
#define bmp180_start_measurement_size 0x01
#define bmp180_start_measurement_flag_register_size 0x01

/*--Extern objects-----------------------------------------------------------*/

extern struct sensor_t bmp180;
extern I2C_HandleTypeDef i2c;
extern UART_HandleTypeDef huart2;

/*--Function headers---------------------------------------------------------*/

/**
 * @brief 
 * 
 * @return void 
 */
__WEAK void bmp180_struct_init(void);

/**
 * @brief 
 * 
 * @return void 
 */
__WEAK void bmp180_init(void);

/**
 * @brief 
 * 
 * @return void 
 */
__WEAK void bmp180_get_data(void);

#ifdef __cplusplus
}
#endif

#endif