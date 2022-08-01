#include <iostream>

using namespace std;


void Armstrong(int n){

    int sum=0, r;
    int m = n;

    while (n > 0){
        sum += (n % 10)*(n % 10)*(n % 10);
        n = n / 10;
    }
    

    if (sum == m)
        cout << "armstrong";
    else
        cout << "not armstrong";

}


int main(){
    Armstrong(153);
    Armstrong(100);
}