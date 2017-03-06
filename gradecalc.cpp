#include "gradecalc.h"
#include "ui_gradecalc.h"

GradeCalc::GradeCalc(QWidget *parent) :QMainWindow(parent),ui(new Ui::GradeCalc){
    ui->setupUi(this);







    //Ass
    connect(ui->AssSpinBox1,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->AssSpinBox2,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->AssSpinBox3,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->AssSpinBox4,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->AssSpinBox5,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->AssSpinBox6,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->AssSlider1,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->AssSlider2,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->AssSlider3,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->AssSlider4,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->AssSlider5,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->AssSlider6,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    //Mid
    connect(ui->MidSpinBox1,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->MidSpinBox2,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->MidSlider1,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->MidSlider2,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    //Fin
    connect(ui->FinSpinBox1,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));
    connect(ui->FinSlider1,SIGNAL(valueChanged(int)),this,SLOT(computeGrades()));

    //Set default radio button
    ui->SchemaRadioButton1->setChecked(true);


}

GradeCalc::~GradeCalc()
{
    delete ui;
}


//***********************************************
//***************COMPUTE THE GRADE***************
//***********************************************

void GradeCalc::computeGrades()
{
    if(class1 ==true && class2 ==false){

        if (schemaA ==true && schemaB ==false){
             double avgAssGrade = (Ass1+Ass2+Ass3+Ass4+Ass5+Ass6)/6;
             double avgMidtermGrade = (Mid1+Mid2)/2;

             ComputedGrade = avgAssGrade*25/100 + avgMidtermGrade*40/100 + Fin1*35/100;
        }
        else if (schemaA ==false && schemaB ==true){
            double avgAssGrade = (Ass1+Ass2+Ass3+Ass4+Ass5+Ass6)/6;

            ComputedGrade = avgAssGrade*25/100 + Fin1*75/100;
        }
    }

    else if(class1 ==false && class2 ==true){

        if (schemaA ==true && schemaB ==false){
             double avgAssGrade = (Ass1+Ass2+Ass3+Ass4)/4;
             double avgMidtermGrade = (Mid1+Mid2)/2;

             ComputedGrade = avgAssGrade*0.25 + avgMidtermGrade*0.35 + Fin1*0.40;
        }
        else if (schemaA ==false && schemaB ==true){
            double avgAssGrade = (Ass1+Ass2+Ass3+Ass4)/4;

            ComputedGrade = avgAssGrade*0.45 + Fin1*0.55;
        }
    }


    ui->OSLabel2->setText(QString::number(ComputedGrade,'f',1));
}

//***********************************************
//********************SCHEMAS********************
//***********************************************

void GradeCalc::on_SchemaRadioButton1_clicked()
{
    schemaA = true;
    schemaB = false;
    computeGrades();
}

void GradeCalc::on_SchemaRadioButton2_clicked()
{
    schemaA = false;
    schemaB = true;
    computeGrades();
}

//***********************************************
//*************SIGNALS AND SLOTS*****************
//***********************************************

//====================  ASS  ====================

//------------AssSlider to AssSpinBox------------

void GradeCalc::on_AssSlider1_valueChanged(int value)
{
    Ass1 = value;
    ui->AssSpinBox1->setValue(value);
}

void GradeCalc::on_AssSlider2_valueChanged(int value)
{
    Ass2 = value;
    ui->AssSpinBox2->setValue(value);
}

void GradeCalc::on_AssSlider3_valueChanged(int value)
{
    Ass3 = value;
    ui->AssSpinBox3->setValue(value);
}

void GradeCalc::on_AssSlider4_valueChanged(int value)
{
    Ass4 = value;
    ui->AssSpinBox4->setValue(value);
}

void GradeCalc::on_AssSlider5_valueChanged(int value)
{
    Ass5 = value;
    ui->AssSpinBox5->setValue(value);
}

void GradeCalc::on_AssSlider6_valueChanged(int value)
{
    Ass6 = value;
    ui->AssSpinBox6->setValue(value);
}


//------------AssSpinBox to AssSlider------------

void GradeCalc::on_AssSpinBox1_valueChanged(int arg1)
{
    Ass1 = arg1;
    ui->AssSlider1->setValue(arg1);
}

void GradeCalc::on_AssSpinBox2_valueChanged(int arg1)
{
    Ass2 = arg1;
    ui->AssSlider2->setValue(arg1);
}

void GradeCalc::on_AssSpinBox3_valueChanged(int arg1)
{
    Ass3 = arg1;
    ui->AssSlider3->setValue(arg1);
}

void GradeCalc::on_AssSpinBox4_valueChanged(int arg1)
{
    Ass4 = arg1;
    ui->AssSlider4->setValue(arg1);
}

void GradeCalc::on_AssSpinBox5_valueChanged(int arg1)
{
    Ass5 = arg1;
    ui->AssSlider5->setValue(arg1);
}

void GradeCalc::on_AssSpinBox6_valueChanged(int arg1)
{
    Ass6 = arg1;
    ui->AssSlider6->setValue(arg1);
}


//====================  MID  ====================

//------------MidSlider to MidSpinBox------------
void GradeCalc::on_MidSlider1_valueChanged(int value)
{
    Mid1 = value;
    ui->MidSpinBox1->setValue(value);
}

void GradeCalc::on_MidSlider2_valueChanged(int value)
{
    Mid2 = value;
    ui->MidSpinBox2->setValue(value);
}

//------------MidSpinBox to MidSlider------------

void GradeCalc::on_MidSpinBox1_valueChanged(int arg1)
{
    Mid1 = arg1;
    ui->MidSlider1->setValue(arg1);
}

void GradeCalc::on_MidSpinBox2_valueChanged(int arg1)
{
    Mid2 = arg1;
    ui->MidSlider2->setValue(arg1);
}


//====================  FIN  ====================

//------------FinSlider to FinSpinBox------------
void GradeCalc::on_FinSlider1_valueChanged(int value)
{
    Fin1 = value;
    ui->FinSpinBox1->setValue(value);
}


//------------FinSpinBox to FinSlider------------
void GradeCalc::on_FinSpinBox1_valueChanged(int arg1)
{
    Fin1 = arg1;
    ui->FinSlider1->setValue(arg1);
}

void GradeCalc::on_ClassComboBox1_activated(int value)
{
    if (value == 0)
    {
        class1 = true;
        class2 = false;
        ui->AssSlider5->setRange(0,100);
        ui->AssSlider6->setRange(0,100);
        ui->AssSpinBox5->setRange(0,100);
        ui->AssSpinBox6->setRange(0,100);
        computeGrades();
    }
    else if (value == 1)
    {
        class1 = false;
        class2 = true;
        ui->AssSlider5->setValue(0);
        ui->AssSlider6->setValue(0);
        ui->AssSpinBox5->setValue(0);
        ui->AssSpinBox6->setValue(0);

        ui->AssSlider5->setRange(0,0);
        ui->AssSlider6->setRange(0,0);
        ui->AssSpinBox5->setRange(0,0);
        ui->AssSpinBox6->setRange(0,0);

        computeGrades();
    }

}
