#include "gradecalc.h"
#include "ui_gradecalc.h"

GradeCalc::GradeCalc(QWidget *parent) :QMainWindow(parent),ui(new Ui::GradeCalc){
    ui->setupUi(this);

}

GradeCalc::~GradeCalc()
{
    delete ui;
}

void GradeCalc::on_spinBox_valueChanged(int arg1)
{
    ui->horizontalSlider->setValue(arg1);
}

void GradeCalc::on_spinBox_2_valueChanged(int arg1)
{
    ui->horizontalSlider_2->setValue(arg1);
}

void GradeCalc::on_spinBox_3_valueChanged(int arg1)
{
    ui->horizontalSlider_3->setValue(arg1);
}

void GradeCalc::on_spinBox_4_valueChanged(int arg1)
{
    ui->horizontalSlider_4->setValue(arg1);
}

void GradeCalc::on_horizontalSlider_valueChanged(int value)
{
    ui->spinBox->setValue(value);
}

void GradeCalc::on_horizontalSlider_2_valueChanged(int value)
{
    ui->spinBox_2->setValue(value);
}

void GradeCalc::on_horizontalSlider_3_valueChanged(int value)
{
    ui->spinBox_3->setValue(value);
}

void GradeCalc::on_horizontalSlider_4_valueChanged(int value)
{
    ui->spinBox_4->setValue(value);
}

void GradeCalc::on_horizontalSlider_5_valueChanged(int value)
{
    ui->spinBox_5->setValue(value);
}

void GradeCalc::on_spinBox_5_valueChanged(int arg1)
{
  ui->horizontalSlider_5->setValue(arg1);
}
