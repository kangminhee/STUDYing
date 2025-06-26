#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    string s; cin >> s;
    for (int i = 0; i <= 9; i++) {
        int sum = 0;
        for (int j = 0; j < 13; j++) {
            if (s[j] == '*') {
                if (j%2) sum += 3*i;
                else sum += i;
            } else {
                if (j%2) sum += 3*(s[j]-'0');
                else sum += (s[j]-'0');
            }
        }
        if (sum % 10 == 0) {
            cout << i;
            return 0;
        }
    }
}