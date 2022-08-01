#include <iostream>
using namespace std;

void Sign(int n)
{
    string result;

    if (n < 0) {
        result = "negative";
    }
    if (n > 0) {
        result = "positive";
    }

    cout << result << endl;

}

int main()
{
    Sign(4);
    Sign(-2);
}