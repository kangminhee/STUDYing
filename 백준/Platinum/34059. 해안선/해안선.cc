#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

ll mod_pow(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

ll fact[1000001], inv_fact[1000001];

void precompute_factorials(int n) {
    fact[0] = 1;
    for (int i = 1; i <= n; ++i) fact[i] = fact[i - 1] * i % MOD;
    
    inv_fact[n] = mod_pow(fact[n], MOD - 2);
    for (int i = n - 1; i >= 0; --i) inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
}

ll combination(int n, int k) {
    if (k > n || k < 0) return 0;
    return fact[n] * inv_fact[k] % MOD * inv_fact[n - k] % MOD;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    
    precompute_factorials(n);

    if (a > b) swap(a, b);

    int N = n - b + a - 2;
    int k = a - 2;
    ll com = combination(N, k);

    ll result;
    if (abs(a - b) != 1) result = com * mod_pow(2, b - a - 1) % MOD;
    else result = (com + mod_pow(2, n - 3)) % MOD;

    cout << result << '\n';

    return 0;
}
