#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll arr[101] = {0, 1, 1, 1, 2,};

int main() {
    int t, a; cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a;
        if (arr[a]) {
            cout << arr[a] << '\n';
            continue;
        }
        for (int j = 5; j <= a; j++) {
            if (arr[j]) continue;
            arr[j] = arr[j-1] + arr[j-5];
        }
        cout << arr[a] << '\n';
    }
    return 0;
}