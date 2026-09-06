#include <iostream>
using namespace std;

class Tempreture {
    public : 
    double celsius;

    Tempreture() {
        celsius=0;
    }

    Tempreture(double cel) {
        celsius=cel;
    }

    double toFahrenheit() const {
        return (celsius*9/5)+32;
    }

    double toKelvin() const {
        return celsius+273.15;
    }

    void displayAll() const {
        cout<<"Tempreture :"<<celsius<<"C = "<<toFahrenheit()<<"F = "<<toKelvin()<<"K"<<endl;
    }
};

int main() {
    
    int tt1;
    cout<<"Enter tempreture in celsius";
    cin>>tt1;
    if(tt1>=-273.15){
        Tempreture t1(tt1);
        t1.displayAll();
    }
    else {
        cout<<"ERROR: Temperature below absolute zero (-273.15°C)";
    }

    int tt2;
    cout<<"Enter tempreture in celsius";
    cin>>tt2;
    if(tt2>=-273.15){
        Tempreture t2(tt2);
        t2.displayAll();
    }
    else {
        cout<<"ERROR: Temperature below absolute zero (-273.15°C)";
    }


    int tt3;
    cout<<"Enter tempreture in celsius";
    cin>>tt3;
    if(tt3>=-273.15){
        Tempreture t3(tt3);
        t3.displayAll();
    }
    else {
        cout<<"ERROR: Temperature below absolute zero (-273.15°C)";
    }

    int tt4;
    cout<<"Enter tempreture in celsius";
    cin>>tt4;
    if(tt4>=-273.15){
        Tempreture t4(tt4);
        t4.displayAll();
    }
    else {
        cout<<"ERROR: Temperature below absolute zero (-273.15°C)";
    }

    return 0;
}
