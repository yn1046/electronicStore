#pragma once

#include "Appliances.h"

class VacuumCleaner : public Appliances {
public:
    VacuumCleaner(int weight, int suctionPower);
    void ShowSpec() override;
private:
    int _suctionPower;
};
