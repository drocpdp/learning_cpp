#include <iostream>
using namespace std;

int SimpleInterest(int P, int T, int R)
{
    float SI;

    SI=P*T*R/100.0;

    return SI;
}


int main(){

    float si = SimpleInterest(1,2,3);

    cout << "Simple Interest is: " << si << endl;

    return 0;
}