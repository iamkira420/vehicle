QT += core
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
    main.cpp \
    Vehicle.cpp \
    PassengerVehicle.cpp \
    TransportVehicle.cpp \
    FileWriter.cpp

HEADERS += \
    Vehicle.h \
    PassengerVehicle.h \
    TransportVehicle.h \
    FileWriter.h