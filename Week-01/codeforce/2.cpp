#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int shelves, bottles, totalSum = 0;
        map<int, int> mp;
        cin >> shelves >> bottles;

        int b[bottles], c[bottles];
        for (int i = 0; i < bottles; i++) {
            cin >> b[i] >> c[i];
            totalSum += c[i];
            mp[b[i]] += c[i];
        }

        if (shelves >= mp.size()) {
           
            cout << totalSum << endl;
        } else {
            
            vector<pair<int, int>> sortedMap(mp.begin(), mp.end());
            sort(sortedMap.begin(), sortedMap.end(), [](pair<int, int> &a, pair<int, int> &b) {
                return b.second < a.second;
            });

            int maxSum = 0;
            for (int i = 0; i < shelves; i++) {
                maxSum += sortedMap[i].second;
            }
            cout << maxSum << endl;
        }
    }

    return 0;
}
