//
// Created by Dylan Morrill on 10/2/19.
//

#include "Jet.h"
#include <string>
#include <stdlib.h>

Jet::Jet() {
   numberOfEngines = 0;
   setBrand("unknown");
   setModel("unknown");
}

Jet::Jet(string brand, string model, string fuelType, int numOfEngines) {
   setBrand(brand);
   setModel(model);
   if(numOfEngines > 2) {
      setFuelType("Rocket");
   }
   else {
      setFuelType(fuelType);
   }

   setNumberOfEngines(numOfEngines);
}

Jet::~Jet() = default;

string Jet::getNumberOfEngines() {
   return to_string(numberOfEngines);
}

void Jet::setNumberOfEngines(int numOfEngines) {
   numberOfEngines = numOfEngines;
}

double Jet::mileageEstimate(double time) {
   double mileage = rand() % 40 + 61;
   mileage = mileage * time;
   if (numberOfEngines > 2) {
      mileage = mileage + (int(mileage) * (.055 * numberOfEngines));
   }
   return mileage;
}

string Jet::toString() {
   return "->Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " + getNumberOfEngines();
}

