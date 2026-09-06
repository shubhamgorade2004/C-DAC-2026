#include <iostream>
using namespace std;

void callvalue(int a, int b) {
    int temp = a;
    a=b;
    b=temp;
}

void callreference(int &a, int &b) {
    int temp = a;
    a=b;
    b=temp;
}

void callpointer(int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main() {
    int a=10;
    int b=20;
    cout<<"Before swapping call ny value"<<endl;
    cout<<"a "<<a<<" b "<<b<<endl;
    callvalue(a,b);
    cout<<"After swapping call ny value"<<endl;
    cout<<"a "<<a<<" b "<<b<<endl;

    int c=10;
    int d=20;
    cout<<"Before swapping call ny value"<<endl;
    cout<<"c "<<c<<" d "<<d<<endl;
    callreference(c,d);
    cout<<"After swapping call ny value"<<endl;
    cout<<"a "<<c<<" b "<<d<<endl;

    int e=10;
    int f=20;
    cout<<"Before swapping call ny value"<<endl;
    cout<<"e "<<e<<" f "<<f<<endl;
    callpointer(&e,&f);
    cout<<"After swapping call ny value"<<endl;
    cout<<"a "<<e<<" b "<<f<<endl;
}