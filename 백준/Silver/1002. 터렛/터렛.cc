#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    int arr[6], a, b, c;
    while (t--) {
        for (int i = 0; i < 6; i++) cin >> arr[i];
        a = (arr[0]-arr[3]) * (arr[0]-arr[3]) + (arr[1]-arr[4]) * (arr[1]-arr[4]);
        b = (arr[2]-arr[5]) * (arr[2]-arr[5]);
        c = (arr[2]+arr[5]) * (arr[2]+arr[5]);
        if (!a) {
            if (!b) cout << "-1\n";
            else cout << "0\n";
        }
        else if (a == b || a == c) cout << "1\n";
        else if (b < a && a < c) cout << "2\n";
        else cout << "0\n";
    }
    return 0;   
}