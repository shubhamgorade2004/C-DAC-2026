#include <iostream>
using namespace std;
class Student {
    public:
    static int add(int a, int b) {
        return a+b;
    }

    int add(int a, int b, int c) {
        return a+b+c;
    }

    float add(float a, int b) {
        return a+b;
    }
};

int main() {
    cout<<Student::add(3,4)<<endl;
    Student s1;
    cout<<s1.add(2,3,4)<<endl;
    cout<<s1.add(2.0f,3)<<endl;

}