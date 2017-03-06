#include "gradecalc.h"
#include "ui_gradecalc.h"

GradeCalc::GradeCalc(QWidget *parent) :QMainWindow(parent),ui(new Ui::GradeCalc){
    ui->setupUi(this);




}

GradeCalc::~GradeCalc()
{
    delete ui;
}


//====================  ASS  ====================

//------------AssSlider to AssSpinBox------------

void GradeCalc::on_AssSlider1_valueChanged(int value)
{
    ui->AssSpinBox1->setValue(value);
}

void GradeCalc::on_AssSlider2_valueChanged(int value)
{
    ui->AssSpinBox2->setValue(value);
}

void GradeCalc::on_AssSlider3_valueChanged(int value)
{
    ui->AssSpinBox3->setValue(value);
}

void GradeCalc::on_AssSlider4_valueChanged(int value)
{
    ui->AssSpinBox4->setValue(value);
}

void GradeCalc::on_AssSlider5_valueChanged(int value)
{
    ui->AssSpinBox5->setValue(value);
}

void GradeCalc::on_AssSlider6_valueChanged(int value)
{
    ui->AssSpinBox6->setValue(value);
}


//------------AssSpinBox to AssSlider------------

void GradeCalc::on_AssSpinBox1_valueChanged(int arg1)
{
    ui->AssSlider1->setValue(arg1);
}

void GradeCalc::on_AssSpinBox2_valueChanged(int arg1)
{
    ui->AssSlider2->setValue(arg1);
}

void GradeCalc::on_AssSpinBox3_valueChanged(int arg1)
{
    ui->AssSlider4->setValue(arg1);
}

void GradeCalc::on_AssSpinBox4_valueChanged(int arg1)
{
    ui->AssSlider4->setValue(arg1);
}

void GradeCalc::on_AssSpinBox5_valueChanged(int arg1)
{
    ui->AssSlider5->setValue(arg1);
}

void GradeCalc::on_AssSpinBox6_valueChanged(int arg1)
{
    ui->AssSlider6->setValue(arg1);
}


//====================  MID  ====================

//------------MidSlider to MidSpinBox------------
void GradeCalc::on_MidSlider1_valueChanged(int value)
{
    ui->MidSpinBox1->setValue(value);
}

void GradeCalc::on_MidSlider2_valueChanged(int value)
{
    ui->MidSpinBox2->setValue(value);
}

//------------MidSpinBox to MidSlider------------

void GradeCalc::on_MidSpinBox1_valueChanged(int arg1)
{
    ui->MidSlider1->setValue(arg1);
}

void GradeCalc::on_MidSpinBox2_valueChanged(int arg1)
{
    ui->MidSlider2->setValue(arg1);
}


//====================  FIN  ====================

//------------FinSlider to FinSpinBox------------
void GradeCalc::on_FinSlider1_valueChanged(int value)
{
    ui->FinSpinBox1->setValue(value);
}


//------------FinSpinBox to FinSlider------------
void GradeCalc::on_FinSpinBox1_valueChanged(int arg1)
{
    ui->FinSlider1->setValue(arg1);
}
