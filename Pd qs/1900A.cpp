#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool foundTriple = false;
        int empty = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '.') empty++;
            if (i + 2 < n && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
                foundTriple = true;
            }
        }

        if (foundTriple) cout << 2 << "\n";
        else cout << empty << "\n";
    }
    return 0;
}
