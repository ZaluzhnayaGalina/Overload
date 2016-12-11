#ifndef MATH_MODEL_H
#define MATH_MODEL_H

#include <QWidget>

namespace Ui {
class math_model;
}

class math_model : public QWidget
{
    Q_OBJECT

public:
    explicit math_model(QWidget *parent = 0);
    ~math_model();

private:
    Ui::math_model *ui;
};

#endif // MATH_MODEL_H
