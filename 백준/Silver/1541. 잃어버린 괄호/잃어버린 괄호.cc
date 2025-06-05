#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    string s, tmp; cin >> s;
    int res = 0;

    bool minus = false;
    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == '+' || s[i] == '-' || i == s.size()) {
            if (minus) {
                res -= stoi(tmp);
            } else {
                res += stoi(tmp);
            }
            tmp.clear();
            if (s[i] == '-') minus = true;
        } else tmp += s[i];
    }
    cout << res;
    return 0;
}