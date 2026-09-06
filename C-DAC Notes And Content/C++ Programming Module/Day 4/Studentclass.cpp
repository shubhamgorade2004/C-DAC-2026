#include <iostream> 
using namespace std;

class Student {
    int roll;
    int age;
    string name;

    public:
    void write() {
        cout<<"Enter the student details roll no, age, name"<<endl;
        cin>>roll>>age>>name;
    }

    void display1() {
        cout<<roll<<endl;
        cout<<age<<endl;
        cout<<name<<endl;
    }
};

int main() {
    Student s1;
    s1.write();
    s1.display1();
}