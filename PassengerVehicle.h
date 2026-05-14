#ifndef PASSENGER_VEHICLE_H
#define PASSENGER_VEHICLE_H

#include "Vehicle.h"
#include <string>
#include <iostream>

class PassengerVehicle : public Vehicle {
    private:
        int passengerCapacity;

    public:
        PassengerVehicle();
        PassengerVehicle(std::string model, int year, int passengerCapacity);

        void setPassengerCapacity(int passengerCapacity);
        int getPassengerCapacity() const;
        PassengerVehicle getPassengerVehicle() const;
};

#endif // PASSENGER_VEHICLE_H