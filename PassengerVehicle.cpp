/*class PassengerVehicle : public Vehicle {
    private:
        int passengerCapacity = 16; // default value is 16 - I'm assuming a Quantum as it is the most available passenger vehicle here in Mzansi
}*/

#include "Vehicle.h"
#include "PassengerVehicle.h"
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

// Constructors
PassengerVehicle::PassengerVehicle() : Vehicle(), passengerCapacity(16) { }

PassengerVehicle::PassengerVehicle(string model, int year, int passengerCapacity) : Vehicle(model, year) {
    setPassengerCapacity(passengerCapacity);
}

// Setters
void PassengerVehicle::setPassengerCapacity(int passengerCapacity) {
    if (passengerCapacity > 0 && passengerCapacity <= 16) {
        this->passengerCapacity = passengerCapacity;
    } else {
        this->passengerCapacity = 16; // Default capacity if invalid
        cout << "Invalid passenger capacity. Setting to default value of 16." << endl;
    }
}

// getters
int PassengerVehicle::getPassengerCapacity() const {
    return passengerCapacity;
}

string PassengerVehicle::getVehicleInfo() const {
    return Vehicle::getVehicleInfo() + " carrying " + to_string(passengerCapacity) + " passengers.";
}

