#include <iostream>

using namespace std;

int SumOfN(int n) {
    int sum;

    //Write formula here as sum=
    sum = (n * (n + 1)) / 2;
    return sum;
}

int main() {

    cout << "Sum is " << SumOfN(2) << endl;
    return 0;

}