#include <bits/stdc++.h>
using namespace std;

int main() {
    int a; string s;
    cin >> a >> s;
    if (s.compare("miss") == 0) {
        cout << 0;
    } else if (s.compare("bad") == 0) {
        cout << 200 * a; 
    } else if (s.compare("cool") == 0) {
        cout << 400 * a;
    } else if (s.compare("great") == 0) {
        cout << 600 * a;
    } else if (s.compare("perfect") == 0) {
        cout << 1000 * a;
    }
}