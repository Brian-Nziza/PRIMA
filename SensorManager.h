#pragma once
#include <cstdint>


/*the purpose of SensorManager is to create 3 separate classes that ship out a struct of sensor data
to ML model on Main ESP32 board to core 1 in order for the Tiny ML to train and predict mdoel. 
this is just placeholder code, not actually finished. 
*/

class GpioDriver { //
public:
    bool read(int pin);
};

class TempSensor {
public:
    float readCelsius(GpioDriver& gpio);
};

struct SensorData {
    float temperature;
};

class SensorManager {
public:
    SensorData readAll(TempSensor& temp);
};