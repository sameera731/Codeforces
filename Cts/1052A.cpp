#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }

        int maxFreq = 0;
        for (int i = 1; i <= n; i++) {
            if (freq[i] > maxFreq) maxFreq = freq[i];
        }

        int ans = 0;
        for (int f = 1; f <= maxFreq; f++) {
            int len = 0;
            for (int i = 1; i <= n; i++) {
                if (freq[i] >= f) len += f;
            }
            if (len > ans) ans = len;
        }

        cout << ans << "\n";
    }
    return 0;
}