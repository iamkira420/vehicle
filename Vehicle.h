/**
* @author BK201
* @date 12 May 2026
* Vehicle header file implementation. Defines the Vehicle class and its member functions.
*/

#ifndef VEHICLE_H
#define VEHICLE_H
#include <QObject>
#include <QString>

using namespace std;

class Vehicle : public QObject {
    Q_OBJECT

    Q_PROPERTY(QString model READ getModel WRITE setModel)
    Q_PROPERTY(int year READ getYear WRITE setYear)

    private:
        QString model;
        int year;

    public:
        // Constructors
        explicit Vehicle(QObject *parent = nullptr);

        Vehicle(QString model, int year, QObject *parent = nullptr);
        Vehicle(const Vehicle& v);

        // Setters
        void setModel(QString model);
        void setYear(int year);
        void setVehicle(QString model, int year);

        // Getters
        QString getModel() const;
        int getYear() const;

        virtual QString getVehicleInfo() const;
        virtual ~Vehicle() {} 
    };

#endif // VEHICLE_H