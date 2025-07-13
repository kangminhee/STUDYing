#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll D[201010];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int N, Q;
    
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> D[i];
    }
    cin >> Q;

    int n, c, x; ll l, r, tmp;
    for (int i = 0; i < Q; i++) {
        cin >> n;
        if (n == 1) {
            cin >> c >> x;
            l = r = x;
            for (int idx = c; idx > 0; idx--) {
                tmp = D[idx];
                D[idx] = tmp + min(tmp, l);
                l -= min(tmp, l);
                if (l <= 0) break;
            }
            for (int idx = c+1; idx <= N; idx++) {
                tmp = D[idx];
                D[idx] = tmp + min(tmp, r);
                r -= min(tmp, r);
                if (r <= 0) break; 
            }
        }
        else if (n == 2) {
            cin >> c;
            cout << D[c] << '\n';
        }
    }
    return 0;
}

