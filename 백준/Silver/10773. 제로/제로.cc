#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void proc() {
    int t, o, n; cin >> t;
    stack<int> s;
    while (t--) {
        cin >> o;
        if (o == 0) s.pop();
        else s.push(o);
    }
    n = s.size();
    t = 0;
    while (!s.empty()) {
        t += s.top();
        s.pop();
    }
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    proc();
    return 0;
}