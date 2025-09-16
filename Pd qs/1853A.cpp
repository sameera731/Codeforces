#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, a;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (!is_sorted(v.begin(), v.end())) {
            cout << 0 << "\n";
        } else {
            int min_diff = INT_MAX;
            for (int i = 0; i < n - 1; i++) {
                min_diff = min(min_diff, v[i + 1] - v[i]);
            }

            int ops = (min_diff / 2) + 1;
            cout << ops << "\n";
        }
    }

    return 0;
}
