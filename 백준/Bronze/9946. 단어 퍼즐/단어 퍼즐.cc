#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    string s1, s2; cin >> s1 >> s2;
    int i = 1;
    while (s1.compare("END") && s2.compare("END")) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2) cout << "Case " << i << ": same\n";
        else cout << "Case " << i << ": different\n";
        i++;
        cin >> s1 >> s2;
    }
}