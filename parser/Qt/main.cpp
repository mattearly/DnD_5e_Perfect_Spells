#include "jsonspellparser.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    jsonspellparser w;
    w.show();

    return a.exec();
}
