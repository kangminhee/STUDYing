#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while  (t--) {
        int m; cin >> m;
        
        int ans = 0, cur = 0;
        while (m--) {
            int p1, p2; cin >> p1 >> p2;
            cur = cur - p1 + p2;
            ans = max(ans, cur);
        }
        cout << ans << '\n';
    }
}