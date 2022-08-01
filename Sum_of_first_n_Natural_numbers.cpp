#include <iostream>
using namespace std;


void SumOfN(int n){

    int sum=0;

    for (int i = 0; i <= n; i++){
        sum += i;
    }

    cout << sum;

}


int main(){

    SumOfN(10);

    return 0;
}
