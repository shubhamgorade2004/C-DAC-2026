#include <iostream>
using namespace std;

class Student {
    int roll;
    int age;
    public :
    Student& setage(int age) {
        this->age=age;
        return *this;
    }

    Student& setroll(int roll) {
        this->roll=roll;
        return *this;
    }

    int getroll() {
        return roll;
    }

    int getage() {
        return age;
    }

};
int main () {
    Student s1;
    s1.setroll(100).setage(22);
    
    cout<<s1.getage()<<endl;
    cout<<s1.getroll()<<endl;

}