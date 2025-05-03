#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int DP[1010][3];
int arr[1010][3];

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        DP[0][i] = arr[0][i];
    }
    for (int i = 1; i < t; i++) {
        DP[i][0] = arr[i][0] + min(DP[i-1][1], DP[i-1][2]);
        DP[i][1] = arr[i][1] + min(DP[i-1][0], DP[i-1][2]);
        DP[i][2] = arr[i][2] + min(DP[i-1][0], DP[i-1][1]);
    }
    cout << min(min(DP[t-1][0], DP[t-1][1]), DP[t-1][2]);
    return 0;
}