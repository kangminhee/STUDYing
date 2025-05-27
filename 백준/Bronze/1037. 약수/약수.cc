#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, tmp; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> tmp; v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    cout << v[0] * v[n-1];
}