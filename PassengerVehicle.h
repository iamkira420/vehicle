#ifndef PASSENGERVEHICLE_H
#define PASSENGERVEHICLE_H

#include "Vehicle.h"
#include <QString>
#include <iostream>
#include <QDebug>
using namespace std;

class PassengerVehicle : public Vehicle {
    Q_OBJECT

    Q_PROPERTY(int passengerCapacity READ getPassengerCapacity WRITE setPassengerCapacity)

    private:
        int passengerCapacity;

    public:
        explicit PassengerVehicle(QObject *parent = nullptr);
        PassengerVehicle(QString model, int year, int passengerCapacity, QObject *parent = nullptr);

        void setPassengerCapacity(int passengerCapacity);
        int getPassengerCapacity() const;
        QString getVehicleInfo() const override;
};

#endif // PASSENGERVEHICLE_H