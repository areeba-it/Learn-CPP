#include<iostream>
using namespace std;
class Employee{
    public:
    int salary;
    public:
    void setSalary(int s){
        salary=s;
    }
    int getSalary(){
        return salary;
    }
};
int main(){
    Employee myobj;
   // myobj.salary=50000;
   myobj.setSalary(50000);
   cout<<myobj.getSalary();
   return 0;
}