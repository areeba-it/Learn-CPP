#include<iostream>
#include<string>
using namespace std;
class Operations {
    public:
    void add(int a,int b){
        cout<<a+b<<endl;
    }
    void add(int a,int b, int c){
        cout<<a+b+c<<endl;
    }
};
int main(){
    Operations a;
    a.add(6,5);
    a.add(4,5,6);
    return 0;
}