#include <iostream>

using namespace std;


int sum(int num1, int num2){
    return num1 + num2;
}

float sum(float num1, float num2){
    return num1 + num2;
}

int sum(int num1, int num2, int num3){
    return num1 + num2 + num3;
}


int main(){
    cout << "Test";
    cout << sum(10, 5);
    cout << sum(12.9f, 8.3f);
    cout << sum(10,20,30);
    return 0;
}