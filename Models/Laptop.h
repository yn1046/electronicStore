#pragma once

#include <string>
#include "Appliances.h"
#include "Device.h"

using namespace std;

class Laptop : public Appliances, Device {
public:
    Laptop(int weight, int batteryLife, string cpu);
    void ShowSpec() override;
private:
    string _cpu;
};
