/*class TransportVehicle : public Vehicle {
    private:
        double capacityKg = 25000; // default value is 25000 kg
}*/

#include "Vehicle.h"
#include "TransportVehicle.h"
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

// Constructors
TransportVehicle::TransportVehicle() : Vehicle(), capacityKg(25000) { }

TransportVehicle::TransportVehicle(string model, int year, double capacityKg) : Vehicle(model, year) {
    setCapacityKg(capacityKg);
}

// Setters
void TransportVehicle::setCapacityKg(double capacityKg) {
    if (capacityKg > 0 && capacityKg <= 25000) {
        this->capacityKg = capacityKg;
    } else {
        this->capacityKg = 25000; // Default capacity if invalid
        cout << "Invalid capacity. Setting to default value of 25000." << endl;
    }
}

// getters
double TransportVehicle::getCapacityKg() const {
    return capacityKg;
}

string TransportVehicle::getVehicleInfo() const {
    return Vehicle::getVehicleInfo() + " with capacity of " + to_string(capacityKg) + " kg";
}

