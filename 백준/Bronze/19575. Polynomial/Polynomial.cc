#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e9+7;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int n, x; cin >> n >> x;
    int a, b; ll res = 0;
	for (int i = 0; i <= n; i++) {
		cin >> a >> b;
		if (!i) res = a;
		else res = (res*x + a) % mod;
	}
	cout << res;
	return 0;
}