//
// Created by Esteban Parra on 9/5/19.
//

#include "Skateboard.h"
#include <stdlib.h>

Skateboard::Skateboard() {
   setBrand("unknown");
   setModel("unknown");
}

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
   double mileage;
    if (time > 25 && time < 250) {
      mileage = ((rand() % 1 + 5) * 0.1) * time;
    }
    else{
      mileage = ((rand() % 1 + 5) * 0.1) + (rand() % 1 + (time/3));
      mileage = mileage * time;
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}