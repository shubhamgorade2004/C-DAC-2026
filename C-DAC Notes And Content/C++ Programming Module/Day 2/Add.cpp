#include <iostream>
using namespace std;

int add1(int a,int b) {
    int sum;
    sum=a+b;
    return sum;
}

int main() {
    int c=10;
    int d=20;
    int result = add1(c,d);
    cout<<result;
    return 0;
}