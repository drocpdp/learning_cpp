#include <iostream>
using namespace std;

void max(int x, int y)
{
    if (x > y) {
        cout << x;
    }
    else {
        cout << y;
    }

}


int main() {

    cout << "Enter 2 integers" << endl;
    int in1, in2, max_num;

    cin >> in1;
    cin >> in2;
    max(in1, in2);

    return 0;

}