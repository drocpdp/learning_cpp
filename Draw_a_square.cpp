#include <iostream>
using namespace std;


void Draw(int n){

    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            cout << "*";    
        }
        cout << endl;
    }

}


int main(){

    Draw(5);
    return 0;
}