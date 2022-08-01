#include <iostream>

using namespace std;


void Palindrome(int n){

    int rev=0;
    int r;
    int m=n;

    while (m > 0){
        r = m % 10;
        rev = (rev * 10) + r;
        m /= 10;
    }

    if (rev == n){
        cout << "palindrome";
    }
    else {
        cout << "not a palindrome";
    }
}


int main(){

    Palindrome(123454321);
    Palindrome(111222);

    return 0;
}