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

Student fun(){
    Student meghla(10,1,5.00);
    return meghla;

}
int main() {

    Student obj = fun();

    cout << "Class = "<<obj.cls<< " \n"<<"Roll = "<< obj.roll<< " \n"<<"GPA = "<< obj.gpa<<endl;

    return 0;
}