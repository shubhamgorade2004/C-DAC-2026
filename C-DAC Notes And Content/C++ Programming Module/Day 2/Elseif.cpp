#include <iostream>
using namespace std;

void neww() {
    cout<<"Enter age to check their personality:";
    int age;
    cin>>age;

    if(age>=70){
        cout<<age<<"Grand"<<endl;
    }
    else if(age>=69 && age<=30) {
        cout<<age<<"Adult"<<endl;
    }
    else{
        cout<<"Fresher"<<endl;
    }
}

int main() {
    neww();
    return 0;
}