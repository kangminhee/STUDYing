#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[101010] = {};
    int n, m, tmp; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        arr[tmp] = i-1;
    }
    // for (int i = 1; i <= n; i++) {
    //     cout << arr[i] << ' ';
    // }
    
    // return 0;
    long long cw = 0, ccw = 0, cwlast = 0, ccwlast = 0;
    // if (m - 1 > 1 + n - m) cout << "CCW\n";
    // else if (m - 1 < 1 + n - m) cout << "CW\n";
    if (0) ;
    else {
        int cur = 2, round = 0;
        // cout << cur << ' ' << m << '\n';
        cwlast = arr[1]; cw = arr[1];
        while (cur < m) {
            // cout << arr[cur] << '\n';
            if (cwlast <= arr[cur]) {
                cw += arr[cur] - cwlast;
            } else {
                cw += n - cwlast + arr[cur];
            }
            cwlast = arr[cur];
            cur++;
        }
        cur = n; cwlast = arr[n]; ccw = arr[n];
        // cout << cur << ' ' << m << '\n';
        while (cur > m) {
            // cout << arr[cur-1] << '\n';
            if (cwlast <= arr[cur-1]) {
                ccw += arr[cur-1] - cwlast;
            } else {
                ccw += n - cwlast + arr[cur-1];
            }
            cwlast = arr[cur-1];
            cur--;
        }

        if (cw == ccw) cout << "EQ\n";
        else cout << (cw > ccw ? "CCW\n" : "CW\n");
        // cout << cw << ' ' << ccw << '\n';
    }
    return 0;
}
