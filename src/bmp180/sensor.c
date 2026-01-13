#include "bmp180.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "string.h"
#include "stdio.h"

struct sensor_t bmp180;

/*--Static commands----------------------------------------------------------*/

/*uint8_t bmp180_start_measurement = 0x2E;
char string[10] = {0};*/

/*--Function bodies----------------------------------------------------------*/

void bmp180_init(void) {
    /*if (HAL_I2C_IsDeviceReady(&i2c, bmp180_addr, 3, 100) != HAL_OK) {
      snprintf((char *)string, sizeof(string), "f\n");
      HAL_UART_Transmit(&huart2, (const uint8_t *)string, strlen((char *)string), HAL_MAX_DELAY);
    }*/
    /*if (HAL_I2C_Mem_Write(&i2c, bmp180_addr, bmp180_start_measurement_flag_register, 
        bmp180_start_measurement_flag_register_size, &bmp180_start_measurement, bmp180_start_measurement_flag_register_size, HAL_MAX_DELAY) == HAL_OK) {
        snprintf();
    }*/
}

void bmp180_get_data(void) {

}

void bmp180_struct_init(void) {
    bmp180.address = bmp180_addr;
    bmp180.init_fn = bmp180_init;
    bmp180.get_data_fn = bmp180_get_data;
}

#ifdef __cplusplus
}
#endif