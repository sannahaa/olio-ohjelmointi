#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // Automaattinen olio
    // pinomuistiin
    // tuhoutuu automaattisesti
    Car objCar;
    objCar.setBrand("Tesla");
    objCar.setModel("Model 3");
    objCar.setYearModel(2020);
    objCar.printData();

    // Dynaaminen olio
    // kekomuistiin
    // täytyy tuhota itse
    Rectangle *objRectangle = new Rectangle();
    objRectangle->setWidth(14.5);
    objRectangle->setHeight(8.2);
    cout<<"Suorakulmion pinta-ala: "<<objRectangle->getArea()<<endl;
    cout<<"Suorakulmion ymparysmitta: "<<objRectangle->getCircum()<<endl;
    delete objRectangle;
    objRectangle=nullptr;

    // Olio smart-pointerin avulla
    // kekomuistiin
    // tuhoutuu automaattisesti
    unique_ptr<Student> objStudent=make_unique<Student>();
    objStudent->setName("Sanna Haasiomaki");
    objStudent->setStudentNumber(1234567);
    objStudent->setAverage(8.7);
    cout<<"Opiskelijan nimi: "<<objStudent->getName()<<endl;
    cout<<"Opiskelijanumero: "<<objStudent->getStudentNumber()<<endl;
    cout<<"Keskiarvo: "<<objStudent->getAverage()<<endl;
    return 0;
}
