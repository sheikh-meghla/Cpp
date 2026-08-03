#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math;
    int english;
};

bool cmp(Student l, Student r)
{
    int totalL = l.math + l.english;
    int totalR = r.math + r.english;

    return (totalL == totalR) ? l.id < r.id : totalL > totalR;
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name
            >> a[i].cls
            >> a[i].section
            >> a[i].id
            >> a[i].math
            >> a[i].english;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " "<< a[i].cls << " "<< a[i].section << " "<< a[i].id << " "<< a[i].math << " "<< a[i].english << endl;
    }

    return 0;
}