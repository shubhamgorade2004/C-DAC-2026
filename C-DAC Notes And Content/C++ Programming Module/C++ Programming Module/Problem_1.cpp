#include <iostream>
using namespace std;

class Student {
    int rollNumber;
    string name;
    double percentage;
    static int totalStudents; 

    Student() {
        rollNumber = 0;
        name = "";
        percentage = 0;
        toatalStudents=0;
    }

    Student(int roll, const string& studentName) {
        rollNumber = roll;
        name = studentName;
    }
    
    Student (const Student &obj1) {
        cout<<"Copy constructor called";
    }

    void setPercentage(double percent) {
        if(percent>=0 && percent<=100) {
            percent = percentage;
        }
    }
    double getPercentage() const{
        return percentage;
    }

    char calculateGrade() const {
        if(grade>=80) {
            return "A";
        }
        else if(grade>=70) {
            return "B";
        }
        else if(grade>=60) {
            return "C";
        }

        else if(grade>=50) {
            return "D";
        }

        else {
            return "F";
        }

    }

    ~Student() {
        cout<<"Destructor called";
    }

}

int main() {
    Student s1;
    Student s2=s1;


    return 0;
}