#include <iostream>

using namespace std;

void DigitToWord(int d){

    if (d == 1){ cout << "one";}
    else if (d == 2){cout <<"two";}
    else if (d == 3){cout <<"three";}
    else if (d == 4){cout <<"four";}
    else if (d == 5){cout <<"five";}
    else if (d == 6){cout <<"six";}
    else if (d == 7){cout <<"seven";}
    else if (d == 8){cout <<"eight";}
    else if (d == 9){cout <<"nine";}
    else {cout<<"zero";}

}



int main(){

    DigitToWord(0);
    DigitToWord(1);
    DigitToWord(2);
    DigitToWord(3);
    DigitToWord(4);
    DigitToWord(5);
    DigitToWord(6);
    DigitToWord(7);
    DigitToWord(8);
    DigitToWord(9);

    return 0;
}