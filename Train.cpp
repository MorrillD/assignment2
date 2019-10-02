//
// Created by Dylan Morrill on 10/2/19.
//
//Train mileage: random mileage between 25 and 35 miles per minute, deduct .02 miles per passenger on the train.
//

#include "Train.h"
#include <string>

Train::Train() {
    setBrand("custom");
    setModel("custom");
}

Train::Train(string brand, string model, string fuelType, int numOfPassengers) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfPassengers(numOfPassengers);
}

Train::~Train() = default;

string Train::getNumberOfPassengers() {
    return to_string(numberOfPassengers);
}

void Train::setNumberOfPassengers(int numOfPassengers) {
   numberOfPassengers = numOfPassengers;
}

double Train::mileageEstimate(double time) {
   double mileage = rand() % 25 + 11;
   mileage -= .02 * numberOfPassengers;
   return mileage * time;
}

string Train::toString() {
   return "-> Train\n" + PoweredVehicle::toString() + "\n\tNumber of Passengers: " + getNumberOfPassengers();
}