#pragma once

#include <string>
#include "Device.h"

using namespace std;

class Smartphone : public Device {
public:
    Smartphone(int batteryLife, string os);
    void ShowSpec() override;
private:
    string _os;
};
