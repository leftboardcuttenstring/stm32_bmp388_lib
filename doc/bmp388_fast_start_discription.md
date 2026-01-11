# Primary description
**Main unit: BMP388**  

Description from manufacturer: *The BMP388 is a digital sensor with pressure and temperature measurement based on proven sensing principles. The sensor module is housed in an extremely compact 10-pin metal-lid LGA package with a footprint of only 2.0 × 2.0 mm2 and max 0.8 mm package height. Its small dimensions and its low power consumption of 3.4 μA @1Hz allow the implementation in battery driven devices such as mobile phones, GPS modules or watches*

# Primary characteristics
| Char. name | Desc. |
|----------|----------|
| Supply voltage (main) | 1.65 - 3.6 V |
| Supply voltage (Interface) | 1.2 - 3.6 V |
| Interface | I2C, SPI |

# Measurement process characteristics
| Char. name | Desc. |
|----------|----------|
| Absolute accuracy | +/- 50 Pa |
| Supply voltage (Interface) | 1.2 - 3.6 V |
| Interface | I2C, SPI |

# Operating modes
**Power modes:**
1. Sleep mode - the sensor does not take any measurements
2. Normal mode - the sensor continuously takes measurements (the sensor takes measurements and then goes into sleep mode)
3. Forced mode - the sensor only takes one measurement

**Measurement modes:**
1. Temperature measurement
2. Pressure measurement (oversampling - ultra low power)
3. Pressure measurement (oversampling - low power)
4. Pressure measurement (oversampling - standart resolution)
5. Pressure measurement (oversampling - high resolution)
6. Pressure measurement (oversampling - ultra high resolution)
7. Pressure measurement (oversampling - highest resolution)

*Note: The BMP388 is designed primarily for measuring atmospheric pressure, so it has one standard temperature measurement accuracy (as an additional feature) and 6 pressure measurement accuracies built into it. The list above describes all pressure measurement accuracies (note that the higher the measurement accuracy, the higher the sensor's overall power consumption. Therefore, if you measure pressure with the lowest accuracy, the sensor will consume 'ultra low power', according to the list)*
