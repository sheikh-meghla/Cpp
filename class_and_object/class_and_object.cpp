#include<bits/stdc++.h>

using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    double GPA;

};

int main() {

    Student a;
    char temp[100] = "Meghla";
    strcpy(a.name,temp);
    a.roll = 100;
    a.GPA = 5.00;

    cout << "Name = "<<a.name<< " \n"<<"Roll = "<< a.roll<< " \n"<<"GPA = "<< a.GPA<<endl;
    return 0;
}