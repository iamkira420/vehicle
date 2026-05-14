/**
 * @author BK201
 * @date 12 May 2026
 */

#include <Vehicle.h>

// Constructors
Vehicle::Vehicle() : model("Unknown"), year(1886) { } 

Vehicle::Vehicle(string model, int year) {
    setVehicle(model, year);
}

Vehicle::Vehicle(const Vehicle& v) {
    setVehicle(v.model, v.year);
}

// Setters
void Vehicle::setModel(string model) {
    this->model = model;
}
void Vehicle::setYear(int year) {
    if (year >= 1886) { // The first car was invented in 1886
        this->year = year;
    } else if (year < 1886) {
        cout << "Invalid year. Year must be 1886 or later." << endl;
    } else {
        this->year = 1886; // Default year if invalid
    }
}  
void Vehicle::setVehicle(string model, int year) {
    setModel(model);
    setYear(year);
}

// Getters
string Vehicle::getModel() const {
    return model;
}
int Vehicle::getYear() const {
    return year;
}
Vehicle Vehicle::getVehicle() const {
    return getModel() + " (" + to_string(getYear()) + ")";
}

