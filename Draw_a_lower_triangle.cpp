#include <iostream>
using namespace std;


void Draw(int n){

    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            cout  << "* ";
        }
        cout << endl;
    }
}



int main(){

    Draw(5);
}