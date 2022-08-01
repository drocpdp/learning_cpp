#include <iostream>

using namspace std;


void Eligible(int age){

    if (age < 12 || age > 50){
        cout <<"eligible";
    }
    else{
        cout << "not eligible";
    }

}

int main(){
    Eligible(34);
}