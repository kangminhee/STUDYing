#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void proc() {
    ll n; cin >> n;
    vector<ll> v;
    for (ll i = 2; i*i <= n; i++) {
        while (n % i == 0) v.push_back(i), n /= i;
    }
    if (n != 1) v.push_back(n);

    if (v.size() <= 1) {cout << -1; return;}
    if (v.size() % 2) v[v.size() -2] *= v.back(), v.pop_back();
    for (int i = 0; i < v.size(); i+=2) {
        cout << v[i] * v[i+1] << " ";
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    proc();
    return 0;
}