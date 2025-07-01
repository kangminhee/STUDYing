#include <bits/stdc++.h>
using namespace std;

int cost[505], res[505], deg[505];
vector<int> V[505];

int main() {
    int n, a; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> cost[i];
        while (1) {
            cin >> a;
            if (a == -1) break;
            V[a].push_back(i);
            deg[i]++;
        }
    }

    queue<int> Q;
    for (int i = 1; i <= n; i++) {
        if (!deg[i]) {
            Q.push(i);
            res[i] = cost[i];
        }
    }

    while (!Q.empty()) {
        int cur = Q.front(); Q.pop();

        for (int i = 0; i < V[cur].size(); i++) {
            int next = V[cur][i];
            deg[next]--;

            res[next] = max(res[next], res[cur]+cost[next]);
            if (deg[next] == 0) Q.push(next);
        }
    }

    for (int i = 1; i <= n; i++) cout << res[i] << '\n';
    return 0;
}