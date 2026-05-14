#include <QCoreApplication>
#include <QDebug>
#include <QObjectList>

#include "Vehicle.h"
#include "PassengerVehicle.h"
#include "TransportVehicle.h"
#include "FileWriter.h"

int main(int argc, char *argv[]) {

    QCoreApplication a(argc, argv);

    qDebug() << "========== VEHICLE TESTING ==========";

    Vehicle vehicle1("Toyota Corolla", 2020);
    Vehicle vehicle2;

    PassengerVehicle passenger1("BMW X5", 2022, 7);
    PassengerVehicle passenger2;

    TransportVehicle transport1("Isuzu Truck", 2019, 12000);
    TransportVehicle transport2;

    transport2.setModel("Mercedes Actros");
    transport2.setYear(2023);
    transport2.setCapacityKg(18000);

    QObjectList vehicleList;

    vehicleList.append(&vehicle1);
    vehicleList.append(&vehicle2);
    vehicleList.append(&passenger1);
    vehicleList.append(&passenger2);
    vehicleList.append(&transport1);
    vehicleList.append(&transport2);

    qDebug() << "\nDisplaying all vehicles:\n";

    for(QObject *object : vehicleList) {

        Vehicle *vehicle = qobject_cast<Vehicle*>(object);

        if(vehicle) {
            qDebug() << vehicle->getVehicleInfo();
        }
    }

    FileWriter writer(vehicleList, "vehicles.txt");

    int recordsWritten = writer.write();

    qDebug() << "\nRecords written to file:" << recordsWritten;

    return a.exec();
}