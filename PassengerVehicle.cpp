

#include "Vehicle.h"
#include "PassengerVehicle.h"
#include <QString>
#include <iostream>
#include <QDebug>
using namespace std;

// Constructors
PassengerVehicle::PassengerVehicle(QObject *parent) : Vehicle(parent), passengerCapacity(16) { }

PassengerVehicle::PassengerVehicle(QString model, int year, int passengerCapacity, QObject *parent) : Vehicle(model, year, parent) {
    setPassengerCapacity(passengerCapacity);
}

// Setters
void PassengerVehicle::setPassengerCapacity(int passengerCapacity) {
    if (passengerCapacity > 0 && passengerCapacity <= 16) {
        this->passengerCapacity = passengerCapacity;
    } else {
        this->passengerCapacity = 16; // Default capacity if invalid
        qWarning() << "Invalid passenger capacity. Setting to default value of 16.";
    }
}

// getters
int PassengerVehicle::getPassengerCapacity() const {
    return passengerCapacity;
}

QString PassengerVehicle::getVehicleInfo() const {
    return Vehicle::getVehicleInfo() + " carrying " + QString::number(passengerCapacity) + " passengers.";
}

