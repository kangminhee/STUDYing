#include <bits/stdc++.h>
using namespace std;

int arr[1025][1025], dp[1025][1025];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + arr[i][j];
        }
    }
    int a, b, c, d;
    while (m--) {
        cin >> a >> b >> c >> d;
        int res = dp[c][d]-dp[a-1][d]-dp[c][b-1]+dp[a-1][b-1];
        cout << res << '\n';
    }
}