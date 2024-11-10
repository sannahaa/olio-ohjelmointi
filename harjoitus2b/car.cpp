#include "car.h"

Car::Car() {}

Car::Car(string b, string m, int y)
{
    brand=b;
    model=m;
    yearModel=y;
}

void Car::printData()
{
    cout <<"Auton merkki: "<< brand<< endl;
    cout <<"Auton malli: "<< model<< endl;
    cout <<"Auton valmistusvuosi: "<< yearModel<< endl;
    cout <<"---------------------------"<< endl;
}
