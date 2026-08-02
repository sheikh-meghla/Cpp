#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 2 != 0) {
            cout << -1 << "\n";

            for (int i = 0; i < n; i++) {
                int x;
                cin >> x;
            }

            continue;
        }

        int even = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x % 2 == 0)
            {
                even++;
            }
        }

        cout << abs(even - n / 2) << "\n";
    }

    return 0;
}