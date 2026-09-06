#include <iostream> 
using namespace std;
#include <vector>
int main() {
    cout<<"Enter the size of 2d array"<<endl;
    int a;
    int b;
    cin>>a>>b;

    int arr1[100][100];

    for(int i=0; i<a; i++) {
        for(int j=0; j<b; j++) {
            cin>>arr1[i][j];
        }
    }
    cout<<"Array is"<<endl;
    for(int i=0; i<a; i++) {
        for(int j=0; j<b; j++) {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}