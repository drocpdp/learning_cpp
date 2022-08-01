#include <iostream>
#include <cmath>
using namespace std;


float root(int a, int b, int c)
{
    float root1;
    root1 = (-(b) + sqrt(b*b - (4*a*c))) / (2*a);
    return root1;
}

int main(){
    float c = root(1,-6,9);
    cout << c << endl;
    return 0;
}
