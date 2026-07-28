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

    Student a,b;

    cin.getline(a.name,100);
    cin >> a.roll >> a.GPA;
    cin.ignore();

    cin.getline(b.name,100);
    cin >> b.roll >> b.GPA;
    

    cout << "Name = "<<a.name<< " \n"<<"Roll = "<< a.roll<< " \n"<<"GPA = "<< a.GPA<<endl;
    cout << "Name = "<<b.name<< " \n"<<"Roll = "<< b.roll<< " \n"<<"GPA = "<< b.GPA<<endl;

    return 0;
}