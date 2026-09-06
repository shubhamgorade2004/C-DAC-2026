#include <iostream>
using namespace std;
void swap(int &c, int &d) {
    int temp = c;
    c=d;
    d=temp;
}

int main() {
    int a;
    int b;
    cout<<"Enter two number to swap"<<endl;
    cin>>a>>b;
    cout<<"A"<<a<<endl;
    cout<<"B"<<b<<endl;
    
    swap(a,b);
    cout<<"A"<<a<<endl;
    cout<<"B"<<b<<endl;
}