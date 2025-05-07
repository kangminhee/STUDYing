#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<int> s;
    int n, a, cnt = 1;

    cin >> n;

    while (n--) {
        cin >> a;

        if (a == cnt) cnt++;
        else s.push(a);

        while (!s.empty() && s.top()==cnt) {
            s.pop();
            cnt++;
        }
    }

    if (s.empty()) cout << "Nice";
    else cout << "Sad";
}