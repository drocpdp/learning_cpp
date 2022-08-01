#include <iostream>
using namespace std;

void OddEven(int n)
{
    if (n % 2 == 0) {
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}

int main(){
    OddEven(1);
    OddEven(2);

    return 0;
}