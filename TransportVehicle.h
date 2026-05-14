#ifndef TRANSPORT_VEHICLE_H
#define TRANSPORT_VEHICLE_H

#include "Vehicle.h"
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

class TransportVehicle : public Vehicle {
    private:
        double capacityKg = 250; // default value is 250 kg

    public:
        TransportVehicle();
        TransportVehicle(std::string model, int year, double capacityKg);

        void setCapacityKg(double capacityKg);
        double getCapacityKg() const;
        std::string getVehicleInfo() const override;
};

#endif // TRANSPORT_VEHICLE_H