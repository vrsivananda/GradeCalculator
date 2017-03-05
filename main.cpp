#include "gradecalc.h"
#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GradeCalc w;

    w.show();
    return a.exec();
}
//QPushButton *button = new QPushButton("Quit the program.");
//QObject::connect(button, SIGNAL(clicked()), &a, SLOT(quit()));
//button->show();
