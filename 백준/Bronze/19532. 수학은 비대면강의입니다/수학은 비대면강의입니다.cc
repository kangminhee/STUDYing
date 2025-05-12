#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[3], b[3], c[3], d[3];
    for (int i = 0; i < 3; i++) cin >> a[i];
    for (int i = 0; i < 3; i++) cin >> b[i];

    for (int i = 0; i < 3; i++) {
        c[i] = a[i] * b[1];
        d[i] = b[i] * a[1];

        c[i] -= d[i];
    }
    cout << c[2]/c[0] << ' ';

    for (int i = 0; i < 3; i++) {
        c[i] = a[i] * b[0];
        d[i] = b[i] * a[0];

        c[i] -= d[i];
    }
    cout << c[2]/c[1];
    return 0;
}