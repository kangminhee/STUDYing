#include <bits/stdc++.h>
using namespace std;

string a[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string b[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

int main() {
    int n, m, i, j, x, y, MIN; cin >> n >> m;
    MIN = n * m;
    string input[51];
    for (i = 0; i < n; i++) {
        cin >> input[i];
    }
    for (i = 0; i <= n-8; i++) {
        for (j = 0; j <= m-8; j++) {
            int aa = 0, bb = 0;
            for (x = 0; x < 8; x++) {
                for (y = 0; y < 8; y++) {
                    if (input[i+x][j+y] != a[x][y]) aa++;
                    if (input[i+x][j+y] != b[x][y]) bb++;
                }
            }
            MIN = min(MIN, min(aa, bb));
        }
    }
    cout << MIN;
}