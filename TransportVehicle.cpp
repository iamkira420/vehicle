

#include "Vehicle.h"
#include "TransportVehicle.h"
#include <QString>
#include <iostream>
#include <QDebug>
using namespace std;

// Constructors
TransportVehicle::TransportVehicle(QObject *parent) : Vehicle(parent), capacityKg(25000) { }

TransportVehicle::TransportVehicle(QString model, int year, double capacityKg, QObject *parent) : Vehicle(model, year, parent) {
    setCapacityKg(capacityKg);
}

// Setters
void TransportVehicle::setCapacityKg(double capacityKg) {
    if (capacityKg > 0 && capacityKg <= 25000) {
        this->capacityKg = capacityKg;
    } else {
        this->capacityKg = 25000; // Default capacity if invalid
        qWarning() << "Invalid capacity. Setting to default value of 25000.";
    }
}

// getters
double TransportVehicle::getCapacityKg() const {
    return capacityKg;
}

QString TransportVehicle::getVehicleInfo() const {
    return Vehicle::getVehicleInfo() + " with capacity of " + QString::number(capacityKg) + " kg";
}

