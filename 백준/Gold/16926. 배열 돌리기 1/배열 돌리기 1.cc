#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int g[303][303];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }

    int s = min(n, m);
    if (s%2) s++;

    for (int i = 0, j = 0; i < s/2 && j < s/2; i++, j++) {
        vector<int> v;
        /**/
        int y = i, x = j;

        // cout << x << ' ' << y << '\n';

        for (; x < m - j; x++) {
            v.push_back(g[y][x]);
        }
        x--; y++;
        for (; y < n - i; y++) {
            v.push_back(g[y][x]);
        }
        x--; y--;
        for (; x >= j; x--) {
            v.push_back(g[y][x]);
        }
        y--; x++;
        for (; y > i; y--) {
            v.push_back(g[y][x]);
        }

        /*assign*/
        y = i, x = j;

        int sz = v.size(), t = k % sz;
        if (t == 0) continue;
        

        for (; x < m - j; x++) {
            g[y][x] = v[t];
            t++; if (t >= sz) t = 0;
        }
        x--; y++;
        for (; y < n - i; y++) {
            g[y][x] = v[t];
            t++; if (t >= sz) t =0;
        }
        x--; y--;
        for (; x >= j; x--) {
            g[y][x] = v[t];
            t++; if (t >= sz) t = 0;
        }
        y--; x++;
        for (; y > i; y--) {
            g[y][x] = v[t];
            t++; if (t >= sz) t =0;
        }
        // for (int t = 0; t < v.size(); t++) {
        //     cout << v[t] << ' ';
        // }
        // cout << '\n';
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << g[i][j] << ' ';
        }
        cout << '\n';
    }
}