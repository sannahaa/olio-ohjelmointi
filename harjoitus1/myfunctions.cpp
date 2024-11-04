#include "myfunctions.h"

void calcSum(int a, int b){
    int sum = a + b;
    cout << "Sum: " << sum << endl;
}

void calcDiv(int a, int b){
    if(b!=0){
        double div = static_cast<double>(a)/b;
        cout << fixed << setprecision(2);
        cout << "Division: " << div << endl;
    } else{
        cout << "You cannot divide by zero" << endl;
    }

}

int retSum(int a, int b){
    int sum = a+b;
    return sum;
}

float retDiv(int a, int b){
    if(b!=0){
    double div = static_cast<double>(a)/b;
    cout << fixed << setprecision(2);
    return div;
    } else{
        cout << "You cannot divide by zero" << endl;
        return 0;
    }

}
