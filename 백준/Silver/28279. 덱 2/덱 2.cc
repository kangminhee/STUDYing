#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, a, x;
    deque<int> dq;
    cin >> n;
    while (n--) {
        cin >> a;
        if (a == 1) {
            cin >> x;
            dq.push_front(x);
        } else if (a == 2) {
            cin >> x;
            dq.push_back(x);
        } else if (a == 3) {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
                dq.pop_front();
            } else {
                cout << "-1\n";
            }
        } else if (a == 4) {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
                dq.pop_back();
            } else {
                cout << "-1\n";
            }
        } else if (a == 5) {
            cout << dq.size() << '\n';
        } else if (a == 6) {
            cout << dq.empty() << '\n';
        } else if (a == 7) {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
            } else {
                cout << "-1\n";
            }
        } else if (a == 8) {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
            } else {
                cout << "-1\n";
            }
        }
    }
}