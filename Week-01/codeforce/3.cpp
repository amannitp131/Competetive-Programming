//https://codeforces.com/contest/2036/problem/C
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);   
	cin.tie(0);     cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s,s2="1100";
        cin >> s;
 
        int q;
        cin >> q;
        int pos[q], val[q];
 
        for (int i = 0; i < q; i++) {
            cin >> pos[i] >> val[i];
 
           
            s[pos[i] - 1] = '0' + val[i];  
            

            //efficient way to check
        bool h = strstr(s.c_str(), "1100");  // Check if "1100" exists in `s`
        if (h) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
        }
    
 
    return 0;
}