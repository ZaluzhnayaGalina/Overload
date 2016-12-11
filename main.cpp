#include<QApplication>
#include"math_model.h"
int main(int argc, char *argv[])
{
    QApplication a(argc,argv);
    math_model* m = new math_model;
    m->show();
    return a.exec();
}

