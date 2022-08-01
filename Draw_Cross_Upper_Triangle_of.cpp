#include <iostream>
using namespace std;


void Draw(int n){
    int j = n;
    for (int i=0; i < n; i++){
        for (int k=0; k < j; k++){
            cout <<"* ";
        }
        j --;
        cout << endl;
    }

}

int main(){
    Draw(5);
}