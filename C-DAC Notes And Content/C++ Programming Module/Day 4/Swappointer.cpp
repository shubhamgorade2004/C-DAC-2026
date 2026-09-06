#include <iostream>
using namespace std;

void swap(int *c, int *d) {
    int temp = *c;
    *d=*c;
    *c=temp;
    return;
}

int main() {
    cout<<"Enter number to swap"<<endl;
    int a;
    int b;
    cin>>a>>b;
    swap(a,b);
    cout<<"A "<<a<<endl;
    cout<<"B "<<b<<endl;
}
