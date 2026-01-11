#ifndef BMP388_DEFS_H
#define BMP388_DEFS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "common.h"

/*---------------------------------------------------------------------------*/

typedef struct bmp388_t bmp388_t;

enum sensor_measurement_accuracy {
    temperature,
    pressure_ultra_low_power,
    pressure_low_power,
    pressure_standart_resolution,
    pressure_high_resolution,
    pressure_ultra_high_resolution,
    pressure_highest_resolution
};

/*---------------------------------------------------------------------------*/

typedef void (*init_fn)(bmp388_t* sensor);
typedef void (*set_power_mode_fn)(bmp388_t* sensor);

struct bmp388_t {
    init_fn sensor_init;
    set_power_mode_fn sensor_set_power_mode;    
};

/*---------------------------------------------------------------------------*/

/**
 * @brief 
 * 
 */
void sensor_init(void);

/**
 * @brief 
 * 
 */
void sensor_get_data(void);

/*---------------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif