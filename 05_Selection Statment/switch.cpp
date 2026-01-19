#include<iostream>
using namespace std;
int main() {
    //local variable decleration:
    char grade = 'C';
    switch (grade) {
        case 'A':
        cout<<"Excellent!"<<endl;
        break;
        case 'B':
        case 'C':
        cout<<"WELL DONE!"<<endl;
        break;
        case 'D':
        cout<<"you passed"<<endl;
        break;
        case 'F':
        cout<<"better try again"<<endl;
        break;
        default:
        cout<<"Invalid grade"<<endl;
    }
      cout<<"your grade is:"<<grade<<endl;
      return 0;
}