#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int D[15][15] = {};
    for (int i = 1; i <= 14; i++) D[0][i] = i;

    for (int i = 1; i <= 14; i++) {
        for (int j = 1; j <= 14; j++) {
            for (int k = 1; k <= j; k++) {
                D[i][j] += D[i-1][k];
            }
        }
    }

    int t, k, n; cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> k >> n;
        cout << D[k][n] << "\n";
    }

    return 0;
}
