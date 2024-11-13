#include "animal.h"
#include <iostream>
using namespace std;

Animal::Animal()
{
    cout <<"Animal konstruktori"<< endl;
}

void Animal::callOut()
{
    cout <<"Eläin ääntelee."<< endl;
}

Animal::~Animal()
{
    cout <<"Animal destruktori"<< endl;
}
