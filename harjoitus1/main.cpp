#include "myfunctions.h"
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter another integer: ";
    cin >> b;
    calcSum(a, b);
    calcDiv(a, b);
    cout << "Returned sum: " << retSum(a, b) << endl;
    cout << "Returned division: " << retDiv(a, b) << endl;

    return 0;
}
