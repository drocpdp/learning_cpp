#include <iostream>
using namespace std;

class School {

private:
    int roll;
    string name;
    int scienceMark;
    int mathMark;
    int readingMark;
    int geologyMark;

public:
    School() {
        name = "Rufus";
        scienceMark = 4;
        mathMark = 2;
        readingMark = 3;
        geologyMark = 4;
    };
    School(string student, int marks[]){
        name = student;
        scienceMark = 4;
        mathMark = 2;
        readingMark = 3;
        geologyMark = 4;            
    };

    int getTotalMarks(){
        return scienceMark + mathMark + readingMark + geologyMark;
    }

    int getGrade(string mark){
        if (mark == "scienceMark"){
            return scienceMark;
        }
        if (mark == "mathMark"){
            return mathMark;
        }
        return 0;
    }


};

int main(){
    School sc = School();
    cout << sc.getTotalMarks();
    return 0;
}