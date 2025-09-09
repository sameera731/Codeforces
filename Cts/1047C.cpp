#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll ans = -1;

        
        ll s1 = a + b;
        if (s1 % 2 == 0) {
            ans = max(ans, s1);
        }

        
        ll s2 = a * b + 1;
        if (s2 % 2 == 0) {
            ans = max(ans, s2);
        }

        if (b % 2 == 0) {
            
            ll s3 = 2 * a + b / 2;
            if (s3 % 2 == 0) {
                ans = max(ans, s3);
            }

            
            ll s4 = a * (b / 2) + 2;
            if (s4 % 2 == 0) {
                ans = max(ans, s4);
            }

            
            ll c = b;
            while (c % 2 == 0) {
                c /= 2;
            }
            if (a % 2 == 0) {
                ll s5 = a * c + b / c;
                if (s5 % 2 == 0) {
                    ans = max(ans, s5);
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}