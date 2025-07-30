#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a; cin >> n;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a%2) flag = false;
    }
    cout << (!flag? "Alice": "Dmitry");
    return 0;
}