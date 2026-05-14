#include <iostream>
#include <vector>

#include "Vehicle.h"
#include "PassengerVehicle.h"
#include "TransportVehicle.h"

using namespace std;

int main() {

    cout << "========== VEHICLE TESTING ==========\n\n";

    // ==============================
    // VEHICLE TESTS
    // ==============================

    cout << "----- Testing Vehicle Class -----\n";

    Vehicle vehicle1("Toyota Corolla", 2020);
    Vehicle vehicle2; // Default constructor

    cout << vehicle1.getVehicleInfo() << endl;
    cout << vehicle2.getVehicleInfo() << endl;

    cout << "\nUpdating vehicle2 details...\n";

    vehicle2.setModel("Honda Civic");
    vehicle2.setYear(2018);

    cout << vehicle2.getVehicleInfo() << endl;


    // ==============================
    // PASSENGER VEHICLE TESTS
    // ==============================

    cout << "\n----- Testing PassengerVehicle Class -----\n";

    PassengerVehicle passenger1("BMW X5", 2022, 7);
    PassengerVehicle passenger2; // Default constructor

    cout << passenger1.getVehicleInfo() << endl;
    cout << passenger2.getVehicleInfo() << endl;

    cout << "\nUpdating passenger2 details...\n";

    passenger2.setModel("Toyota Quantum");
    passenger2.setYear(2021);
    passenger2.setPassengerCapacity(12);

    cout << passenger2.getVehicleInfo() << endl;


    // ==============================
    // TRANSPORT VEHICLE TESTS
    // ==============================

    cout << "\n----- Testing TransportVehicle Class -----\n";

    TransportVehicle transport1("Isuzu Truck", 2019, 12000);
    TransportVehicle transport2; // Default constructor

    cout << transport1.getVehicleInfo() << endl;
    cout << transport2.getVehicleInfo() << endl;

    cout << "\nUpdating transport2 details...\n";

    transport2.setModel("Mercedes Actros");
    transport2.setYear(2023);
    transport2.setCapacityKg(18000);

    cout << transport2.getVehicleInfo() << endl;


    // ==============================
    // POLYMORPHIC TESTING
    // ==============================

    cout << "\n----- Testing Vehicle List -----\n";

    vector<Vehicle*> vehicleList;

    vehicleList.push_back(&vehicle1);
    vehicleList.push_back(&vehicle2);
    vehicleList.push_back(&passenger1);
    vehicleList.push_back(&passenger2);
    vehicleList.push_back(&transport1);
    vehicleList.push_back(&transport2);

    cout << "\nDisplaying all vehicles:\n\n";

    for (Vehicle* vehicle : vehicleList) {
        cout << vehicle->getVehicleInfo() << endl;
    }


    // ==============================
    // GETTER TESTS
    // ==============================

    cout << "\n----- Testing Getters -----\n";

    cout << "Model: " << passenger1.getModel() << endl;
    cout << "Year: " << passenger1.getYear() << endl;
    cout << "Passengers: " << passenger1.getPassengerCapacity() << endl;

    cout << "\nCapacity of transport1: "
         << transport1.getCapacityKg()
         << " kg\n";


    cout << "\n========== TESTING COMPLETE ==========\n";

    return 0;
}