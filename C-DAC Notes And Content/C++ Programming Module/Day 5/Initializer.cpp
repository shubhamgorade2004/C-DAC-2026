#include <iostream>
using namespace std;

class Student {
    int roll;
    int age;
    const string name;

    public:
    Student(int r, int b, string n) : roll(r), age(b), name(n) {
        cout<<"Prameterized Constructor"<<endl;
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
    Student s1(200, 300, "Shubham");
    Student s2(100, 100, "Sai");
    s1.display();
    s2.display();
}

