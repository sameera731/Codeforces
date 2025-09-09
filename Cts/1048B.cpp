#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        int k = min(n, m);
        ll cakes = 0;
        for (int i = 0; i < k; i++) {
            cakes += v[i] * (m - i);
        }
        cout << cakes << endl;
    }
    return 0;
}