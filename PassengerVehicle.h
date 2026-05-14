#ifndef PASSENGER_VEHICLE_H
#define PASSENGER_VEHICLE_H

#include "Vehicle.h"
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

class PassengerVehicle : public Vehicle {
    private:
        int passengerCapacity;

    public:
        PassengerVehicle();
        PassengerVehicle(std::string model, int year, int passengerCapacity);

        void setPassengerCapacity(int passengerCapacity);
        int getPassengerCapacity() const;
        std::string getVehicleInfo() const override;
};

#endif // PASSENGER_VEHICLE_H