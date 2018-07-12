#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton pushButton(QObject::tr("Hello,Qt"));
    pushButton.show();
    QObject::connect(&pushButton,SIGNAL(clicked(bool)),&a,SLOT(quit()));

    return a.exec();
}
