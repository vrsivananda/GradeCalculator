#ifndef GRADECALC_H
#define GRADECALC_H

#include <QMainWindow>

namespace Ui {
class GradeCalc;
}

class GradeCalc : public QMainWindow
{
    Q_OBJECT

public:
    explicit GradeCalc(QWidget *parent = 0);
    ~GradeCalc();

private slots:

    // AssSlider Signals
    void on_AssSlider1_valueChanged(int value);
    void on_AssSlider2_valueChanged(int value);
    void on_AssSlider3_valueChanged(int value);
    void on_AssSlider4_valueChanged(int value);
    void on_AssSlider5_valueChanged(int value);
    void on_AssSlider6_valueChanged(int value);

    //AssSpinBox Signals
    void on_AssSpinBox1_valueChanged(int arg1);
    void on_AssSpinBox2_valueChanged(int arg1);
    void on_AssSpinBox3_valueChanged(int arg1);
    void on_AssSpinBox4_valueChanged(int arg1);
    void on_AssSpinBox5_valueChanged(int arg1);
    void on_AssSpinBox6_valueChanged(int arg1);

    //MidSlider Signals
    void on_MidSlider1_valueChanged(int value);
    void on_MidSlider2_valueChanged(int value);


    //MidSpinBox Signals
    void on_MidSpinBox1_valueChanged(int arg1);
    void on_MidSpinBox2_valueChanged(int arg1);

    //FinSlider Signal
    void on_FinSlider1_valueChanged(int value);

    //FinSpinBox Signal
    void on_FinSpinBox1_valueChanged(int arg1);


private:
    Ui::GradeCalc *ui;
};

#endif // GRADECALC_H
