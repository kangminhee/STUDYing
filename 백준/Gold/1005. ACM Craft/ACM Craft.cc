#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int res[1010], indeg[1010], cost[1010];
        vector<int> V[1010];
        
        int n, k, x, y; cin >> n >> k;
        for (int i = 1; i <= n; i++) cin >> cost[i];
        for (int i = 0; i < k; i++) {
            cin >> x >> y;
            indeg[y]++;
            V[x].push_back(y);
        }
        int w; cin >> w;
        
        queue<int> Q;
        for (int i = 1; i <= n; i++) {
            if (!indeg[i]) Q.push(i);
            res[i] = cost[i];
        }

        while (!Q.empty()) {
            int cur = Q.front(); Q.pop();

            for (int i = 0; i < V[cur].size(); i++) {
            int next = V[cur][i];
            indeg[next]--;

            res[next] = max(res[next], res[cur]+cost[next]);
            if (indeg[next] == 0) Q.push(next);
            }
        }
        cout << res[w] << '\n';
    }
}