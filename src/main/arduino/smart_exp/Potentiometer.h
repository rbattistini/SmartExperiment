#ifndef __POTENTIOMETER_H_
#define __POTENTIOMETER_H_

#include "SmartExperiment.h"

class Potentiometer {

public:
    virtual uint16_t getValue() = 0;
};

#endif // __POTENTIOMETER_H_
