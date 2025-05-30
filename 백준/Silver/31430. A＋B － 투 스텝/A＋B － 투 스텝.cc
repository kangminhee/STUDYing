#include <bits/stdc++.h>
using namespace std;
using ll=long long;

const char arr[] = "abcdefghijklmnopqrstuvwxyz";
const char aaa[] = "aaaaaaaaaaaaaaaaaaaaaaaaaa";

string hexa(ll a) {
    string s;
    while (a) {
        // cout << a << '\n';
        const char* p = arr+a%26;
        s.append(p, 0, 1);
        a/=26;
    }
    s.append(13-s.size(), 'a');
    return s;
}

void solve1() {
    ll a, b; cin >> a >> b;
    cout << hexa(a+b);
    return;
}

void solve2() {
    string s; cin >> s;
    ll res = 0;
    ll hi = 1;
    for (int i = 0; i < 13; i++) {
        res += (s[i]-'a')*hi;
        hi*=26;
    }
    cout << res;
    return;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    if (t==1) solve1();
    if (t==2) solve2();
    return 0;
}