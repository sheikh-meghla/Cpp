#include<bits/stdc++.h>

using namespace std;

class Student
{
    public:
    int cls;
    int roll;
    double GPA;

    Student(int c,int r,int g){
        cls = c;
        roll = r;
        GPA = g;
    }

};

int main() {

    Student Meghla(10,1,5.00);
    Student Rafi(12,1,5.00);

    cout << "Class = "<<Meghla.cls<< " \n"<<"Roll = "<< Meghla.roll<< " \n"<<"GPA = "<< Meghla.GPA<<endl;
    cout << "Class = "<<Rafi.cls<< " \n"<<"Roll = "<< Rafi.roll<< " \n"<<"GPA = "<< Rafi.GPA<<endl;

    return 0;
}