#include <iostream>

using namespace std;

void Perfect(int n){

    int sum=0;

    int factor=0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            sum += i;
        }
    }

    if (n * 2 == sum){
        cout << "perfect";
    }
    else{
        cout << "not perfect";
    }
}


int main(){

    Perfect(120);
}