#include <iostream>
using namespace std;


int CalculateDistance(int u, int v, int a)
{
    float distance;
    distance = (v*v-u*u) / (2*a);
    return distance;
}

int main(){
    int distance = CalculateDistance(2,3,4);
    cout << "Distance is " << distance << endl;
    return 0;
}