#include<iostream>
#include<string>
using namespace std;
class Vehicle {
    public:
    string brand="ford";
    void honk(){
        cout<<"Tuut,tuut!\n";
    }
};
class Car:public Vehicle {
    public:
    string modal="mustang";
};
int main(){ 
    Car myCar;
    Car mehran;
    myCar.honk();
    cout<<myCar.brand+" "+myCar.modal;
    mehran.honk();
    cout<<mehran.modal;
    return 0;
}
