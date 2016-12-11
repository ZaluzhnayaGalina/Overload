#include "math_model.h"
#include "ui_math_model.h"

math_model::math_model(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::math_model)
{
    ui->setupUi(this);
}

math_model::~math_model()
{
    delete ui;
}
