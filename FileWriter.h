#ifndef FILEWRITER_h
#define FILEWRITER_h

#include <QObjects>
#include <QString>
#include <QString>

class FileWriter {
    private:
        QObjectList list;
        QString filename;

    public:
        FileWriter(QObjectList list, QString filename);
        int write();
}

#endif // FILEWRITER_h