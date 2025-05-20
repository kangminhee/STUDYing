#include <bits/stdc++.h>
using namespace std;

int arr[150][150] = {};
int WHITE, BLUE, cnt;

void solve(int x_s, int x_e, int y_s, int y_e);

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    solve(0, n, 0, n);
    cout << WHITE << '\n' << BLUE;
    return 0;
}

void solve(int x_s, int x_e, int y_s, int y_e) {
    if (x_e - x_s == 1) {
        if (arr[x_s][y_s]) {
            BLUE++;
        } else {
            WHITE++;
        }
        return;
    }
    int pass = 1;
    int std = arr[x_s][y_s];
    for (int i = x_s; i < x_e; i++) {
        for (int j = y_s; j < y_e; j++) {
            if (arr[i][j] != std) {
                pass = 0;
                break;
            }
        }
        if (!pass) break;
    }
    if (pass) {
        if (std) BLUE++;
        else WHITE++;
        return;
    } else {
        solve(x_s, (x_s+x_e)/2, y_s, (y_s+y_e)/2);
        solve(x_s, (x_s+x_e)/2, (y_s+y_e)/2, y_e);
        solve((x_s+x_e)/2, x_e, y_s, (y_s+y_e)/2);
        solve((x_s+x_e)/2, x_e, (y_s+y_e)/2, y_e);
    }

}