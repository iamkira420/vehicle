/**
* @author BK201
* @date 12 May 2026
* Vehicle header file implementation. Defines the Vehicle class and its member functions.
*/

#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

class Vehicle {
    private:
        std::string model;
        int year;

public:
    // Constructors
    Vehicle();
    Vehicle(std::string model, int year);
    Vehicle(const Vehicle& v);

    // Setters
    void setModel(std::string model);
    void setYear(int year);
    void setVehicle(std::string model, int year);

    // Getters
    std::string getModel() const;
    int getYear() const;
    virtual std::string getVehicleInfo() const;
};

#endif // VEHICLE_H