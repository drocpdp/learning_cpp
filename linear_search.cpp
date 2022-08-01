#include <iostream>

using namespace std;


int main(){
    int numbers[5] = {1,2,3,4,5};
    int input_number;
    cout << "Enter a number to search for:" << endl;
    cin >> input_number;

    cout << sizeof(numbers);
    for (int i = 0; i < 5; i++){
        if (numbers[i] == input_number){
            cout << "Found it";
        }
    }

} 