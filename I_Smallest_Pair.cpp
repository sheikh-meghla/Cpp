#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long int A[N];

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long ans = LLONG_MAX;

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                ans = min(ans, A[i] + A[j] + (j - i));
            }
        }

        cout << ans << '\n';
    }

    return 0;
}