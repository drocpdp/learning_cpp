#include <iostream>
using namespace std;


void Discount(int amount){

    float disAmount;

    if (amount >= 5000){
        disAmount = amount - (amount * 0.20);
    }
    else if (amount >= 2000){
        disAmount = amount - (amount * 0.10);
    }
    else{
        disAmount = amount - (amount * 0.05);
    }

    cout << disAmount;
}


int main(){

    Discount(5001);
    Discount(5000);
    Discount(1999);
    Discount(2000);
    Discount(4999);
    Discount(5001);
    Discount(6000);
}