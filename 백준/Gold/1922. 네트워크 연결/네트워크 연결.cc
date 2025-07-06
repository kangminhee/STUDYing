#include <bits/stdc++.h>
using namespace std;

vector<tuple<int,int,int>> E;
int P[1010];

int Find(int v) {
    if (v == P[v]) return v;
    else return P[v] = Find(P[v]);
}
bool Union(int u, int v) {
    if (Find(u) != Find(v)) {
        P[P[u]] = P[v];
        return true;
    } else {
        return false;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m; cin >> n >> m;
    int a, b, c, res=0;
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        E.push_back({c,a,b});
    }
    sort(E.begin(), E.end());
    for (int i = 1; i <= n; i++) P[i] = i;
    
    for ( auto [c, a, b] : E ) {
        if (Union(a, b)) {
            res += c;
        }
    }
    cout << res;
    return 0;
}