#include <iostream> 
using namespace std;

class Student {
    int roll;
    int age;

    public :
    const int getroll() {
        return roll;
    }

    const int getage() {
        return age;
    }


    int setroll(const int p) {
        roll=1; //Dont change value bcz const it set the value from their only fuction call.
        roll = p;
    }

    int setage(const int q) {
        age = q;
    }

    
    void display1() {
        cout<<roll<<endl;
        cout<<age<<endl;
        
    }
};

int main() {
    Student s1;
    int p=100;
    int q=101;
    s1.setroll(p);
    s1.setage(q);
    cout<<s1.getroll()<<endl;;
    cout<<s1.getage()<<endl;
    s1.display1();
    //cout<<age; 'age' was not declared in this scope
    //cout<<s1.age; age' is private within this context
}