#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int N, S, tmp; cin >> N >> S;
    ll arr[101010] = {0, };
    for (int i = 1; i <= N; i++) {
        cin >> tmp;
        arr[i] = arr[i-1] + tmp;
    }

    int res=101010, l=0, r=1;
    while (r <= N) {
        ll sum = arr[r]-arr[l];
        if (sum >= S) {
            res = min(res, r-l);
            l++;
        } else {
            r++;
        }
    }
    if (res > N) cout << 0;
    else cout << res;
}