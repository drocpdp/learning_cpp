#include <iostream>

using namespace std;


void Factorial(int n){

    int fact=1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }

    cout << fact;
}


int main(){
    Factorial(5);
}