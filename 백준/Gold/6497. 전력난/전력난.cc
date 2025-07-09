#include <bits/stdc++.h>
using namespace std;

vector<tuple<int,int,int>> E;
int P[201010];

int Find(int u) {
    if (u == P[u]) return u;
    else return P[u] = Find(P[u]);
}
bool Union(int u, int v) {
    if (Find(u) != Find(v)) {
        P[P[u]] = P[v];
        return true;
    } return false;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    while (1) {
        int m, n; cin >> m >> n;
        if (m == 0 && n == 0) break;
        int x, y, z;
        long long res = 0, tmp=0;
        for (int i = 0; i < n; i++) {
            cin >> x >> y >> z;
            E.push_back({z,x,y});
            tmp += z;
        }
        for (int i = 0; i < n; i++) P[i] = i;
        sort(E.begin(), E.end());
        for (auto [z, x, y] : E) {
            if (Union(x, y)) res += z;
        }
        cout << tmp - res << '\n';

        E.clear();
    }
}