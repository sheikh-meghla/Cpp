#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        string s1, s2;
        cin >> s1 >> s2;

        size_t i = s1.find(s2);

        while (i != -1) { 
            s1.replace(i, s2.length(), "#");
            i = s1.find(s2, i + 1);
        }

        cout << s1 << endl;
    }

    return 0;
}