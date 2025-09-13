#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        long long curr_time = 0;
        int curr_side = 0;
        long long total_points = 0;
        
        for (int i = 0; i < n; i++) {
            long long req_time;
            int req_side;
            cin >> req_time >> req_side;
            
            long long time_avail = req_time - curr_time;
            long long distance = abs(req_side - curr_side);
            
            
            long long runs = time_avail;
            if ((runs - distance) % 2 != 0) {
                runs--;
            }
            
            total_points += runs;
            curr_time = req_time;
            curr_side = req_side;
        }
        
        
        long long rem_time = m - curr_time;
        total_points += rem_time;
        
        cout << total_points << "\n";
    }
    
    return 0;
}