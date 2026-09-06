#include <iostream>
using namespace std;

class Student {
    int roll;
    int age;
    string name;

    public:

    void accept() {
        cout<<"Enter the student details"<<endl;
        cin>>roll>>age>>name;
    }
     void display() {
        cout<<"Student details"<<endl;
        cout<<roll<<endl;
        cout<<age<<endl;
        cout<<name<<endl;
        
    }
};
int main() {
    Student s1[3];
    for(int i=0;i<1;i++){
        s1[i].accept();
    }

    for(int i=0;i<1;i++){
        s1[i].display();
    }

    Student *s2 = new Student[5];
    for(int i=0;i<1;i++){
        s2[i].accept();
    }

    for(int i=0;i<1;i++){
        s2[i].display();
    }
}

