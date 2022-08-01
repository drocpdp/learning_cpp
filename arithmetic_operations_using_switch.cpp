#include <iostream>

using namespace std;


void ArithOpt(int x, int y, int choice){

    int ans;

    switch (choice) {
        case 1: ans = x + y;
            break;
        case 2: ans = x - y;
            break;
        case 3: ans = x * y;
            break;
        case 4: ans = x / y;
            break;
    }

    cout << ans;

}



int main(){
    ArithOpt(4,2,1);
    ArithOpt(4,2,2);
    ArithOpt(4,2,3);
    ArithOpt(4,2,4);
}