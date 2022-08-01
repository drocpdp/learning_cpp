#include <iostream>
using namespace std;


void Max3(int a, int b, int c){

    if (a > b){
        if (a > c){
            cout << a;
        }
    }
    else if (b > a){
        if (b > c){
            cout << b;
        }
    }
    else if (c > a){
        if (c > b){
            cout << c;
        }
    }

}


int main(){
    Max3(1,2,3);
    return 0;
}