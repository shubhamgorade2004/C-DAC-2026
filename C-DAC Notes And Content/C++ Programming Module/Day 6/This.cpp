#include <iostream>
using namespace std;

class Student {
    int roll;
    int age;
    public :
    Student(int roll, int age) {
        this->roll=roll;
        this->age=age;
    }

    int getage() {
        return age;
    }
    int getroll() {
        return roll;
    }
};
int main () {
    Student s1(100,22);

    cout<<s1.getage()<<endl;
    cout<<s1.getroll()<<endl;

}