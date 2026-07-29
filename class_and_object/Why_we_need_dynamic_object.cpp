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

Student* fun(){
    Student meghla(10,1,5.00);
    Student* p = &meghla;
    return p;

}
int main() {

    Student* p = fun();

    cout << "Class = "<<p->cls<< " \n"<<"Roll = "<<p->roll<< " \n"<<"GPA = "<< p->gpa<<endl;

    return 0;
}