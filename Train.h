//
// Created by Dylan Morrill on 10/2/19.
//

#ifndef DRIVINGSIMULATOR_TRAIN_H
#define DRIVINGSIMULATOR_TRAIN_H

#include "PoweredVehicle.h"

class Train : public PoweredVehicle {

private:
   int numberOfPassengers;

public:
   Train();

   explicit Train(string brand, string model, string fuelType, int numOfPassengers);

   virtual ~Train();
   string getNumberOfPassengers();
   void setNumberOfPassengers(int numOfPassengers);
   virtual double mileageEstimate(double time);
   virtual string toString();
};


#endif //DRIVINGSIMULATOR_TRAIN_H