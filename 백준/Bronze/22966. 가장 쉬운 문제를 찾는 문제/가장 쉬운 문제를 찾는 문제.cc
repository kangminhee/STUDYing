#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n; int a; string s;
    vector<pair<int, string>> V;
    while (n--) {
        cin >> s >> a;
        V.push_back(make_pair(a, s));
    }
    sort(V.begin(), V.end());
    cout << V[0].second;
}