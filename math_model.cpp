#include "math_model.h"
#include "ui_math_model.h"
#include<QVector>
math_model::math_model(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::math_model)
{
    ui->setupUi(this);
    ui->S->xAxis->setLabel("Энерговыработка, МВтСут/ТВС");
    ui->S->yAxis->setLabel("Число вынимаемых ТВС");
}

math_model::~math_model()
{
    delete ui;
}

void math_model::on_pushButton_clicked()
{
    double Em=2800, d=50, E0=1400, alpha=5;
    double h=0.01;
    int N=Em/h; int n=2*d/h; int n1=(E0-d)/h;
    QVector<double> x(N), y(N);
    for(int i=0; i<=n1; i++)
    {
        x[i]=i*h;
        y[i]=0;
    }
    for(int i=n1+1; i<=n1+n; i++)
    {
        x[i]=i*h;
        y[i]=alpha;
    }
    for(int i=n1+n+1; i<N;i++)
    {
        x[i]=i*h;
        y[i]=0;
    }
    ui->S->addGraph();
    ui->S->xAxis->setRange(0, Em);
    ui->S->yAxis->setRange(0, alpha);
    ui->S->graph(0)->setData(x,y);
    ui->S->replot();
}
