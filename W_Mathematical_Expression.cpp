#include<bits/stdc++.h>

using namespace std;

int main() {

    int a,b,c;
    int ans;
    char s,q;
    cin >> a >> s >> b >> q >> c;
    bool flag = false;
    if (s == '+')
    {
        if (a + b == c)
        {
            flag = true;
        }
        else{
            ans = a + b;
        }
                
    }
    else if (s == '-')
    {
        if (c == a - b)
        {
            flag = true;
        }
        else{
            ans = a - b;
        }
        
    }
    else if (s == '*')
    {
        if (c == a * b)
        {
            flag = true;
        }
        else{
            ans = a * b;
        }
        
    }
    if (flag == true)
    {
        cout << "Yes" <<endl;
    }
    else{
        cout << ans <<endl;
    }
    
    
    
    

    return 0;
}