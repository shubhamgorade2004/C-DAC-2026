#include <iostream>
using namespace std;
void arr1() {
    cout<<"Please enter the size of the array"<<endl;
    int a = 0;
    cin>>a;
    
    int arr2[a];
    cout<<"Please enter the elements"<<endl;
    for(int i=0; i<a; i++) {
        cin>>arr2[i];
    }

    cout<<"Array elements"<<endl;
    for(int i=0; i<a; i++) {
        cout<<i<<"ith element"<<arr2[i]<<" "<<endl;
    }
}

int main() {
    arr1();
    return 0;
}