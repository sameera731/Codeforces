#include <iostream>
using namespace std;

int main() {
    int T, k, x;
    cin >> T;

    while (T--) {
        cin >> k >> x;
        long long result = x;
        
        
        for (int i = 0; i < k; i++) {
            result *= 2;
        }
        
        cout << result << endl;
    }

    return 0;
}