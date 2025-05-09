#include <bits/stdc++.h>
using namespace std;

// #define D

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// code
    int n, a, i; cin >> n;
    vector<int> v, d;
    for (i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
        if (i != 0) {
            a = a - v[i-1];
            d.push_back(a);
        }
    }
    sort(d.begin(), d.end());
    d.resize(unique(d.begin(), d.end()) - d.begin());
    a = gcd(d[0], d[1]);
    #ifdef D
    cout << a << '\n';    
    #endif
    for (i = 2; i < d.size(); i++) {
        a = gcd(a, d[i]);
    }
    #ifdef D
    cout << a << '\n';
    #endif
    cout << (v[n-1]-v[0])/a - n + 1 << '\n';


    return 0;
}