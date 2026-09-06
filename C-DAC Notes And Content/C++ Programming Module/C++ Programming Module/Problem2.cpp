#include <iostream>
using namespace std;

class Employee {
    int empId;
    string name;
    double salary;
    int performanceRating;

    public: 
    Employee() {
    int empId=0;
    string name="";
    double salary=0;
    int performanceRating=0;
    }

    Employee (int id, const string& empName, double sal, int rating){
    }
    
    void accept() {
        cin>>empId>>name>>salary>>performanceRating;
    }

    double calculateBonus() const {
        if(performanceRating==1) {
            return (salary*0)/100;
        }
        else if(performanceRating==2) {
            return (salary*5)/100;
        }
        else if(performanceRating==3) {
            return (salary*10)/100;
        }
        else if(performanceRating==4) {
            return (salary*15)/100;
        }
        if(performanceRating==5) {
            return (salary*20)/100;
        }
        else{
            cout<<"Please enter valid reading in between 1 to 5";
            return 0;
        }
    }
    
    void displayDetails() const{
        cout<<"ID: "<<empId<<" | Name:"<<name<<" | Salary: "<<salary<<" | Rating:"<<performanceRating<< " | Bonus: "
        <<calculateBonus()<<endl;
    }


};

int main() {
    Employee obj[5];
    
    for(int i=0; i<5; i++){
        cout<<"Enter the details of the Employee :empId,name,salary,performanceRating"<<endl;
        obj[i].accept();
    }

    for(int i=0; i<5; i++){
        obj[i].displayDetails();
    }
    return 0;
}