#include <iostream>

using namespace std;

void Working(int hour){
    if (hour >= 9 & hour <= 18) {
        cout <<"working";
    }
    else{
        cout <<"leisure";
    }

}

int main(){

    Working(1);

    return 0;
}