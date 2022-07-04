#include <iostream>
#include "Models/VacuumCleaner.h"
#include "Models/Smartphone.h"
#include "Models/Laptop.h"

int main() {

    IElectronics *electronics[3];
    electronics[0] = new VacuumCleaner(5500, 300);
    electronics[1] = new Smartphone(3000, "Android");
    electronics[2] = static_cast<Appliances *>(new Laptop(1200, 8600, "Apple M1"));

    bool open = true;
    while (open) {
        cout << "Please select the product:" << endl;
        cout << "1. VACUUM CLEANER" << endl;
        cout << "2. PHONE" << endl;
        cout << "3. LAPTOP" << endl;
        cout << "0. exit" << endl;

        int choice;
        cin >> choice;
        if (choice > 0 && choice <= 3) {
            electronics[choice - 1]->ShowSpec();
            cout << endl;
        } else if (choice == 0) open = false;
        else {
            cout << "Incorrect input. Please enter a number between 0 and 3." << endl;
        }
    }

    for (auto &electronic : electronics) {
        delete electronic;
    }

    return 0;
}
