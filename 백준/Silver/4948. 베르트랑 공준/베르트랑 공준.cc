#include <bits/stdc++.h>
using namespace std;
using ll=long long;

bool isPrime(ll num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num%2 == 0 || num%3 == 0) return false;
    for (ll i = 5; i * i <= num; i+=2) {
        if (num%i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    while (n) {
        int res = 0;
        // cout << "hi " << n/2*2+1 << ' ';
        for (int i = n/2*2+1; i <= 2*n; i++) {
            if (i == n) continue;
            if (isPrime(i)) res++;
        }
        cout << res << '\n';
        cin >> n;
    }
}