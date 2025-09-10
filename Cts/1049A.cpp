#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        string sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());

        if (s == sorted_s) {
            cout << 0 << endl;
        } else {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] != sorted_s[i]) {
                    cnt++;
                }
            }
            
            cout << (cnt + 1) / 2 << endl;
        }
    }
    return 0;
}
