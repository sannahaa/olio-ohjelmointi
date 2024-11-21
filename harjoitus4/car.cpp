#include "car.h"

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::printDetails()
{
    cout<<"Auto: "<<getModel()<<" "<<getBrand()<<endl;
    cout<<"Moottori: "<<objEngine.getHorsepower()<<" hp, "<<objEngine.getDisplacement()<<" L"<<endl;
    cout<<"Rengas 1: "<<objWheel1.getSize()<<" tuumaa, "<<objWheel1.getType()<<endl;
    cout<<"Rengas 2: "<<objWheel2.getSize()<<" tuumaa, "<<objWheel2.getType()<<endl;
    cout<<"Rengas 3: "<<objWheel3.getSize()<<" tuumaa, "<<objWheel3.getType()<<endl;
    cout<<"Rengas 4: "<<objWheel4.getSize()<<" tuumaa, "<<objWheel4.getType()<<endl;
}

Car::Car() {}

Car::Car(string b, string m)
{
    brand=b;
    model=m;
}

void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels()
{
    objWheel1=Wheel(17,"kesarengas");
    objWheel2=Wheel(17,"kesarengas");
    objWheel3=Wheel(17,"kesarengas");
    objWheel4=Wheel(17,"kesarengas");
}
