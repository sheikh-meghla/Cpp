#include<bits/stdc++.h>

using namespace std;

class Student
{
    public:
    int cls;
    int roll;
    double gpa;

    Student(int cls,int roll,int gpa){
       this->cls = cls;
       this->roll = roll;
       this->gpa = gpa;
    }

};

int main() {

    Student Meghla(10,1,5.00);
    // Student Rafi(12,1,5.00);
    Student* Rafi = new Student(12,1,5.00);

    cout << "Class = "<<Meghla.cls<< " \n"<<"Roll = "<< Meghla.roll<< " \n"<<"GPA = "<< Meghla.gpa<<endl;
    cout << "Class = "<<Rafi->cls<< " \n"<<"Roll = "<< Rafi->roll<< " \n"<<"GPA = "<< Rafi->gpa<<endl;

    return 0;
}