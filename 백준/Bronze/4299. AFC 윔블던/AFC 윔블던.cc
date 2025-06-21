#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, x, y;
    cin >> a >> b;
    if (a < b) cout << -1;
    else {
        x = (a+b)/2;
        y = (a-b)/2;
        if (x+y == a && x-y == b) cout << x << " " << y;
        else cout << -1;
    }
    return 0;
}