#include <string>
#include "Smartphone.h"

using namespace std;

Smartphone::Smartphone(int batteryLife, string os) : Device(batteryLife), _os(os) {
}

void Smartphone::ShowSpec() {
    cout << "Battery life: " << _batteryLife << endl;
    cout << "Operating system: " << _os << endl;
}