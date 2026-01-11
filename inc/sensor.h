#ifndef SENSOR_H
#define SENSOR_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include "common.h"

/*---------------------------------------------------------------------------*/

typedef uint8_t sensor_address;

struct sensor_t {
    sensor_address actual_address;
    char* sensor_name;
    void* config_data;
    void (*init)(void);
    double (*get_data)(void);
};

/*---------------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif