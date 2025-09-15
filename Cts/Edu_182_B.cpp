#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int calCost(const vector<int>& arr) {
    int n = arr.size();
    
    int left = n;
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            left = i;
            break;
        }
    }
    
    int right = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] != i + 1) {
            right = i;
            break;
        }
    }
    
    if (left == n || right == -1) {
        return 0;
    }
    
    return right - left + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        // Find missing numbers
        set<int> used_els;
        for (int x : p) {
            if (x > 0) {
                used_els.insert(x);
            }
        }
        
        vector<int> missing;
        for (int i = 1; i <= n; i++) {
            if (used_els.find(i) == used_els.end()) {
                missing.push_back(i);
            }
        }
        
        vector<int> zero_pos;
        for (int i = 0; i < n; i++) {
            if (p[i] == 0) {
                zero_pos.push_back(i);
            }
        }
        
        int mCost = 0;
        
        if (missing.size() > 8) {
            // Strategy 1
            vector<int> temp = p;
            int missing_idx = 0;
            
            for (int pos : zero_pos) {
                int correct_val = pos + 1;
                
                bool placed = false;
                for (int j = missing_idx; j < missing.size(); j++) {
                    if (missing[j] != correct_val) {
                        swap(missing[missing_idx], missing[j]);
                        temp[pos] = missing[missing_idx];
                        missing_idx++;
                        placed = true;
                        break;
                    }
                }
                
                if (!placed) {
                    temp[pos] = missing[missing_idx];
                    missing_idx++;
                }
            }
            
            mCost = max(mCost, calCost(temp));
            
            //strategy 2:
            temp = p;
            sort(missing.rbegin(), missing.rend());
            for (int i = 0; i < zero_pos.size(); i++) {
                temp[zero_pos[i]] = missing[i];
            }
            mCost = max(mCost, calCost(temp));
            
            //strategy 3: 
            temp = p;
            sort(missing.begin(), missing.end());
            for (int i = 0; i < zero_pos.size(); i++) {
                temp[zero_pos[i]] = missing[i];
            }
            mCost = max(mCost, calCost(temp));
            
        } else {
            sort(missing.begin(), missing.end());
            
            do {
                vector<int> temp = p;
                for (int i = 0; i < zero_pos.size(); i++) {
                    temp[zero_pos[i]] = missing[i];
                }
                
                int cost = calCost(temp);
                mCost = max(mCost, cost);
                
            } while (next_permutation(missing.begin(), missing.end()));
        }
        
        cout << mCost << "\n";
    }
    
    return 0;
}