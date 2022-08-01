#include <iostream>
using namespace std;


int Min(int a, int b){
    if (a < b){
        return a;
    }
    return b;
}

int Min(int a, int b, int c){
    if (a < b and a < c){
        return a;
    }
    if (b < c and b < a){
        return b;
    }
    return c;
}

float Min(float a, float b){
    if (a < b){
        return a;
    }
    return b;
}

int main(){

    cout << Min(10,5);
    cout << Min(12,7,9);
    cout << Min(18.0f, 9.0f);
}