#include <iostream>
using namespace std;
int percentage(int x1,int x2,int x3,int x4,int x5){
    float totalmarks =500;
    int obtainmarks=x1+x2+x3+x4+x5;
    float percentage=(obtainmarks/totalmarks)*100;
    cout<<percentage<<"%";
    return percentage;
}
int main() {
    int sub1,sub2,sub3,sub4,sub5;
    cout<<"Enter your Subject marks \n ***********\n";
    cout<<"Enter sub1 Marks:";
    cin>>sub1;
    cout<<"\n Enter sub2 Marks:";
    cin>>sub2;
    cout<<"\n Enter sub3 Marks:";
    cin>>sub3;
    cout<<"\n Enter sub4 Marks:";
    cin>>sub4;
    cout<<"\n Enter sub5 Marks:";
    cin>>sub5;
    float student_percentage=percentage(sub1,sub2,sub3,sub4,sub5);
    if (student_percentage >=80 && student_percentage <=100) {
        cout<<"Grade A+";
    }
    else if (student_percentage>=70 && student_percentage<=80) {
        cout<<"Grade A";
    }
    else if(student_percentage>=60&& student_percentage<=70) {
        cout<<"Grade B";
    }
    else{
        cout<<"fail";
    }
    
    return 0;

}