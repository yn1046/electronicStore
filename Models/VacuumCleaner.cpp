#include "VacuumCleaner.h"

VacuumCleaner::VacuumCleaner(int weight, int suctionPower) : Appliances(weight), _suctionPower(suctionPower) {
}

void VacuumCleaner::ShowSpec() {
    Appliances::ShowSpec();
    cout << "Suction power: " << _suctionPower << endl;
}