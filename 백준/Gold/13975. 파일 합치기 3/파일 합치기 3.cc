#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    int tmp;
    while(t--) {
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        ll res = 0;
        int k; cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> tmp;
            pq.push(tmp);
        }
        while (pq.size() > 1) {
            ll a = pq.top();
            pq.pop();
            ll b = pq.top();
            pq.pop();
            pq.push(a+b);
            res += a+b;
        }
        cout << res << '\n';
    }
}