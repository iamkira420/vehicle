#ifndef TRANSPORTVEHICLE_H
#define TRANSPORTVEHICLE_H

#include "Vehicle.h"
#include <QString>
#include <QDebug>
#include <iostream>
#include <stdio.h>
using namespace std;

class TransportVehicle : public Vehicle {
    Q_OBJECT

    Q_PROPERTY(double capacityKg READ getCapacityKg WRITE setCapacityKg)
    private:
        double capacityKg = 25000; // default value is 25000 kg

    public:
        explicit TransportVehicle(QObject *parent = nullptr);
        TransportVehicle(QString model, int year, double capacityKg, QObject *parent = nullptr);

        void setCapacityKg(double capacityKg);
        double getCapacityKg() const;
        QString getVehicleInfo() const override;
};

#endif // TRANSPORTVEHICLE_H