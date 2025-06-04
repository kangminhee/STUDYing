#include <bits/stdc++.h>
using namespace std;

int main() {
    long n, k;
    cin >> n >> k;
    n = 1 << (n-1);
    // cout << n << ' ';
    cout << k/n;
}