#include <iostream>
#include <cmath>
using namespace std;


void Roots(float a, float b, float c){

    float d, r1, r2;

    d = (b*b) - (4 * a * c);
    r1 = d;
    r2 = -1 * d;
    
    if (d == 0){
        cout<<"real and equal" << r1;
    }
    else{
        if (d > 0){
            cout<<"real and unequal" << r1 << r2;
        }
        else{
            if (d < 0){
                cout << "imaginary";
            }
        }
    }
}

int main(){

    Roots(1.0,2.0,3.0);

    return 0;
}