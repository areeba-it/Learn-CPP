#include<iostream>
#include<string>
using namespace std;
// Define a structure
struct Person {
    string name;
    int age;
    float salary;

    // Member function to display information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main() {
    // Create a structure variable
    Person p1;

    // Input data
    cout << "Enter name: ";
    cin >> p1.name;
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    // Display information
    cout << "\nDisplaying Information." << endl;
    p1.displayInfo();

    return 0;
}