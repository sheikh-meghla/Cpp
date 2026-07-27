#include<bits/stdc++.h>

using namespace std;
int main()
{
    
    int * a = new int[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    int * b = new int[6];
    for (int i = 0; i < 4; i++)
    {
        b[i] = a[i];
    }
    b[4] = 12;
    b[5] = 13;
    delete[] a;

    for (int i = 0; i < 6; i++)
    {
        cout << b[i] << " ";
    }
    
    return 0;
    
} 

