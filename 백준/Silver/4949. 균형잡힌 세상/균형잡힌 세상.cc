#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void proc() {
    int l, res;
    string s; getline(cin, s);
    stack<char> sc;
    while (s[0] != '.') {
        while (!sc.empty()) sc.pop();
        l = s.length(); res = 1;
        for (int i = 0; i < l; i++) {
            switch(s[i]) {
                case '(':
                    sc.push('(');
                    break;
                case ')':
                    if (!sc.empty() && sc.top() == '(') sc.pop();
                    else res = 0;
                    break;
                case '[':
                    sc.push('[');
                    break;
                case ']':
                    if (!sc.empty() && sc.top() == '[') sc.pop();
                    else res = 0;
                    break;
                case '.':
                    i = l;
                default:
                    break;                
            }
        }
        if (sc.empty() && res) cout << "yes\n";
        else cout << "no\n";
        getline(cin, s);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    proc();
    return 0;
}