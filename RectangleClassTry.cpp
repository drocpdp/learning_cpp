#include <iostream>
using namespace std;

class Rectangle{

private:
    int length;
    int breadth;

public:
    Rectangle(){

        length=0;
        breadth=0;
    }
    Rectangle(int l){
        length = l;
    }

    int getBreadth(){
        return breadth;
    }
    int getLength(){
        return length;
    }
};

int main(){

    Rectangle r = Rectangle(3);
    cout << r.getLength();
    return 0;
}

