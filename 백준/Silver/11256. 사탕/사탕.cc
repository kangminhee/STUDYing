#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t, j, n, r, c, res;
    cin >> t;
    while (t--) {
        priority_queue<int> pq; res = 0;
        cin >> j >> n;
        for (int i = 0; i < n; i++) {
            cin >> r >> c;
            pq.push(r*c);
        }
        while (!pq.empty()) {
            j -= pq.top(); pq.pop();
            res++;
            if (j <= 0) break;
        }
        cout << res << '\n';
    }
}