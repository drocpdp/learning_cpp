#include <iostream>
using namespace std;


void CheckAge(int age){

    if (age >= 12 & age <= 50) {
        cout<<"not young";
    }
    else {
        cout<<"young";
    }

}


int main() {

    CheckAge(1);

    return 0;
}