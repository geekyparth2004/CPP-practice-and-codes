#include<iostream>
using namespace std; 
class Student{
public:
    string name; 
    int roll; 
    int percentage;
};
int main()
{
    Student parth; 

    parth.name = "Parth Goel";
    parth.percentage = 89;
    parth.roll = 34; 

    cout<<parth.roll; 
}