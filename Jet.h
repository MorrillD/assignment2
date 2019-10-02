//
// Created by Dylan Morrill on 10/2/19
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet: public PoweredVehicle {
   private:
      int numberOfEngines;
   
   public:
      Jet();

      explicit Jet(string brand, string model, string fuelType, int numOfEngines);

      virtual ~Jet();
      string getNumberOfEngines();
      void setNumberOfEngines(int numOfEngines);
      virtual double mileageEstimate(double time);
      virtual string toString();
};

#endif //DRIVINGSIMULATOR_JET_H