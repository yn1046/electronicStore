#include <string>
#include "Laptop.h"

using namespace std;

Laptop::Laptop(int weight, int batteryLife, string cpu) : Appliances(weight), Device(batteryLife), _cpu(cpu) {
}

void Laptop::ShowSpec() {
    Appliances::ShowSpec();
    cout << "Battery life: " << _batteryLife << endl;
    cout << "CPU: " << _cpu << endl;
}