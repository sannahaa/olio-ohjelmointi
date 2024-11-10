#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;    //Luodaan vektori nimeltä carList

    //Luodaan Car-luokan olioita
    Car objCar_1=Car("Tesla","Model 3",2020);
    Car objCar_2=Car("Volvo","V60",2016);
    Car objCar_3=Car("Fiat","Punto",2004);

    //Lisätään oliot listaan
    carList.push_back(objCar_1);
    carList.push_back(objCar_2);
    carList.push_back(objCar_3);

    //Tulostetaan listan toisen alkion tiedot
    carList[1].printData();

    //Tulostetaan kaikkien autojen tiedot
    for(int i=0; i<=2; i++){
        carList[i].printData();
    }


    return 0;
}
