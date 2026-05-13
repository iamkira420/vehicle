/**
* @author BK201
* @date 12 May 2026
* Vehicle header file implementation. Defines the Vehicle class and its member functions.
*/

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    private:
        string model;
        int year;

public:
    // Constructors
    Vehicle();
    Vehicle(string model, int year);
    Vehicle(const Vehicle& v);

    // Setters
    void setModel(string model);
    void setYear(int year);
    void setVehicle(string model, int year);

    // Getters
    string getModel() const;
    int getYear() const;
    Vehicle getVehicle() const;
};

#endif // VEHICLE_H