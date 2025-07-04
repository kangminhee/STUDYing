#include <bits/stdc++.h>
using namespace std;

int res[101010] = {};
bool c[101010] = {};
vector<int> g[101010];

int sol(int cur) {
    c[cur] = true;
    for (int i = 0; i < g[cur].size(); i++) {
        int next = g[cur][i];
        if (!c[next]) {
            res[cur] += sol(next);
        }
    }
    return res[cur];
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, r, q, u, v;
    cin >> n >> r >> q;

    for (int i = 0; i < n-1; i++) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) res[i] = 1;

    sol(r);

    for (int i = 0; i < q; i++) {
        cin >> u;
        cout << res[u] << '\n';
    }
    return 0;
}