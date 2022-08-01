#include <iostream>
using namespace std;


void Draw(int n){

    for (int x=0; x < n; x++){
        for (int i=0; i < n; i++){
            
            if (i+x >= n-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

}


int main(){

    Draw(5);
}