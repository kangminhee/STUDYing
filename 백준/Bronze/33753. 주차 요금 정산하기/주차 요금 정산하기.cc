#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c, t;
    cin >> a >> b >> c >> t;

    if (t <= 30) cout << a;
    else cout << a + ceil(1.0*(t-30)/b)*c;
}