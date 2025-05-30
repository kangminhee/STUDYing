#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int N;
void sol(vector<pair<int,int>> G[], int D[]) {
    int C[8080] = {};
    for (int i = 2; i <= N; i++) D[i] = 1e9;
    for (int iter = 1; iter <= N; iter++) {
        int v = -1;
        for (int i = 1; i <= N; i++) {
            if (C[i]) continue;
            if (v == -1 || D[v] > D[i]) v = i;
        }
        C[v] = 1;
        for (auto [i,w] : G[v]) if (!C[i]) D[i] = min(D[i], D[v] + w);
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int m, D1[8080] = {}, D2[8080] = {};
    vector<pair<int,int>> G1[8080], G2[8080];
    cin >> N >> m;
    for (int i = 0; i < m; i++) {
        int a, b, d; cin >> a >> b >> d;
        G1[a].emplace_back(b, 2*d);
        G1[b].emplace_back(a, 2*d);
        G2[a].emplace_back(N+b, d);
        G2[b].emplace_back(N+a, d);
        G2[N+a].emplace_back(b, 4*d);
        G2[N+b].emplace_back(a, 4*d);
    }
    sol(G1, D1);
    N*=2;
    sol(G2, D2);

    int r = 0;
    // for (int i = 0; i <= N; i++) cout << D1[i] << ' ';
    // cout << '\n';
    //    for (int i = 0; i <= N; i++) cout << D2[i] << ' ';
    // cout << '\n';
    //    for (int i = 0; i <= N; i++) cout << D2[N+i] << ' ';
 
    N /= 2;
    for (int i = 2; i <= N; i++) r += D1[i] < min(D2[i], D2[N+i]);
    cout << r;
}