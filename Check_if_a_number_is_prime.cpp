#include <iostream>

using namespace std;


void Prime(int n)
{

    int count=0;

    for(int i=1; i<=n; i++){
        if (n % i == 0){
            count += 1;
        }
    }

    if (count > 2){
        cout << "not prime";
    }
    else{
        cout << "prime";
    }

}


int main(){

    Prime(14);
    Prime(97);
    Prime(7);
}