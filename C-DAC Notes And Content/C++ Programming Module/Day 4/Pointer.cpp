#include <iostream> 
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int b = 100;
    *ptr = b;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int c = 10;
    int &d = c;
    d = 1001;
    cout<<d<<endl;
    cout<<c<<endl;
}