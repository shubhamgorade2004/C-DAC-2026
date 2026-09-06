#include <iostream>
using namespace std;

int main () {
    int rows;
    int colms;
    cout<<"Enter the values of the array rows and colms"<<endl;
    cin>>rows>>colms;

    int **twoarr = new int *[rows];

    for(int i=0; i<rows; i++) {
        twoarr[i] = new int[colms];
    }

    cout<<"Enter the elements in the 2d array"<<endl;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<colms; j++) {
            cin>>twoarr[i][j];
        }
    }

    cout<<"Array is :"<<endl;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<colms; j++) {
            cout<<twoarr[i][j]<<" ";
        }
        cout<<endl;
    }
}