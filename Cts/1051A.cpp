#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> results;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        bool found_valley = false;
        for (int i = 1; i < n - 1; i++) {
            if (p[i] < p[i-1] && p[i] < p[i+1]) {
                found_valley = true;
                break;
            }
        }
        if (found_valley) {
            results.push_back("NO");
        } else {
            results.push_back("YES");
        }
    }
    for (const string &res : results) {
        cout << res << endl;
    }
    return 0;
}