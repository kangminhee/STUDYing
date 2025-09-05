#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    tuple<int,int,int> ans;
    ll res = LLONG_MAX;
    
    for (int i = 0; i < n - 2; i++) {
        for (int j = i+1, k = n-1; j < k; ) {
            ll tmp = v[i]+v[j]+v[k];
            if (tmp == 0) {
                cout << v[i] << ' ' << v[j] << ' ' << v[k];
                return 0;
            } else if (tmp > 0) {
                if (res > tmp) {
                    res = tmp;
                    ans = {i, j, k};
                }
                k--;
            } else {
                if (res > abs(tmp)) {
                    res = abs(tmp);
                    ans = {i, j, k};
                }
                j++;
            }
        }
    }

    auto [a,b,c] = ans;
    cout << v[a] << ' ' << v[b] << ' ' << v[c] << '\n';
    return 0;
}