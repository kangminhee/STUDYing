#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, i, res = 0; string wnr, a, b, ans;
    bool check = false;
    cin >> n >> wnr;
    vector<pair<string, string>> V;

    for (i = 0; i < n; i++) {
        cin >> a >> b;
        V.push_back(make_pair(a, b));
    }
    for (i = n-1; i >= 0; i--) {
        if (!wnr.compare(V[i].first)) {
            ans = V[i].second;
            check = true;
            continue;
        }
        if (check) {
            if (!ans.compare(V[i].second)) res++;
        }
    }
    cout << res;
    return 0;
}