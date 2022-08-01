#include<iostream>
using namespace std;


void Digits(int n){

    int digit;
    while (n > 0){
        digit = n % 10;
        cout << digit << " ";
        n = n / 10;
    }
}

int main(){

    Digits(1234);
    Digits(56);

}