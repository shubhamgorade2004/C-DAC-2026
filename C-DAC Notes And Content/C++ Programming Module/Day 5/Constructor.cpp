#include <iostream>
using namespace std;

class Student {
    int roll;
    int age;
    string name;

    public:

    Student() {
        cout<<"Default Constructor"<<endl;
        roll=10;
        age=100;
        name="Shubham";
    }

    Student(int a, int b, string n) {
        cout<<"Prameterized Constructor"<<endl;
        roll=a;
        age=b;
        name=n;
    }

     void display() {
        cout<<"Student details"<<endl;
        cout<<roll<<endl;
        cout<<age<<endl;
        cout<<name<<endl;
        
    }


    ~Student() {
        cout<<"Constructor destroyed"<<endl;
    }
};
int main() {
    Student s1;
    Student s2(100, 100, "Sai");

    s1.display();
    s2.display();


}

