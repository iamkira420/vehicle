#include "FileWriter.h"

#include <QFile>
#include <QMetaObject>
#include <QMetaProperty>
#include <QTextStream>

FileWriter::FileWriter(QObjectList list, QString filename) {
    this->list = list;
    this->filename = filename;
}

int FileWriter::write() {

    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return 0;
    }

    QTextStream out(&file);

    int count = 0;

    for(QObject *object : list) {

        const QMetaObject *meta = object->metaObject();

        out << meta->className() << "\n";

        for(int i = meta->propertyOffset();
            i < meta->propertyCount();
            i++) {

            QMetaProperty property = meta->property(i);

            QString propertyName = property.name();

            QVariant value = object->property(property.name());

            out << propertyName
                << ": "
                << value.toString()
                << "\n";
        }

        out << "\n";

        count++;
    }

    file.close();

    return count;
}