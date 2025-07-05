#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int p[30] = {};
    int t; char c; string s;
    int res = 0, cor = 0;

    while (1) {
        cin >> t;
        if (t == -1) break;

        cin >> c >> s;
        if (!s.compare("right")) {
            if (p[c-'A'] == -1) continue;
            res += p[c-'A'] + t;
            p[c-'A'] = -1; 
            cor++;
        } else {
            p[c-'A'] += 20;
        }
    }
    cout << cor << " " << res;
}