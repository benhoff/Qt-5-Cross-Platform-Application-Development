#include "fortuneteller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FortuneTeller w;
    w.show();
    return a.exec();
}
