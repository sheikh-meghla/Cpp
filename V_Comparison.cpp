#include<bits/stdc++.h>

using namespace std;

int main() {

    int a,b;
    char ch;

    cin >> a >> ch >> b;

    bool flag = false;
    if (ch == '<')
    {
        if (a < b)
        {
            flag = true;
        }
        
    }
    else if (ch == '>')
    {
        if (a > b)
        {
            flag = true;
        }
        
    }
    else if (ch == '=')
    {
        if (a == b)
        {
            flag = true;
        }
        
    }
    if (flag == true)
    {
        cout << "Right\n";
    }
    else{
        cout << "Wrong\n";
    }
    
    
    

    return 0;
}