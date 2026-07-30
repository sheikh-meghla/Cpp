#include<bits/stdc++.h>

using namespace std;

int main() {

    string s,s2;
    cin >> s >> s2;
    // s += s2;
    s.append(s2);
    s.push_back('!');
    s.pop_back();
    cout << s << endl;

    return 0;
}