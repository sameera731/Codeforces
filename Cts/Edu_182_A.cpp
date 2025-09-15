#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + a[i];
        }
        
        int ans_l = 0, ans_r = 0;
        bool found = false;
        
        for (int l = 1; l <= n - 2 && !found; l++) {
            for (int r = l + 1; r <= n - 1; r++) {
                int s1 = pref[l] % 3;
                int s2 = (pref[r] - pref[l]) % 3;
                int s3 = (pref[n] - pref[r]) % 3;
                
                if ((s1 == s2 && s2 == s3) || (s1 != s2 && s1 != s3 && s2 != s3)) {
                    ans_l = l;
                    ans_r = r;
                    found = true;
                    break;
                }
            }
        }
        
        if (ans_l != 0) {
            cout << ans_l << " " << ans_r << endl;
        } else {
            cout << "0 0" << endl;
        }
    }
    return 0;
}