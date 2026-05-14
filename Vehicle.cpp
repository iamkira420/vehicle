/**
 * @author BK201
 * @date 12 May 2026
 */

#include "Vehicle.h"
#include <QDate>
#include <QDebug>

using namespace std;

// Constructors
Vehicle::Vehicle(QObject *parent) : QObject(parent), model("Unknown"), year(1886) { } 

Vehicle::Vehicle(QString model, int year, QObject *parent) : QObject(parent) {
    setVehicle(model, year);
}

Vehicle::Vehicle(const Vehicle& v) : QObject(v.parent()) {
    setVehicle(v.model, v.year);
}

// Setters
void Vehicle::setModel(QString model) {
    this->model = model;
}
void Vehicle::setYear(int year) {
    if (year >= 1886 && year > 2026) { // The first car was invented in 1886, we're in 2026
        this->year = year;
    } else  {
        qWarning() << "Invalid year. Year must be 1886 or later.";
         this->year = 1886; // Default year if invalid  
    } 
}
void Vehicle::setVehicle(QString model, int year) {
    setModel(model);
    setYear(year);
}

// Getters
QString Vehicle::getModel() const {
    return model;
}
int Vehicle::getYear() const {
    return year;
}
QString Vehicle::getVehicleInfo() const {
    return getModel() + " (" + QString::number(getYear()) + ")";
}
