#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int a; cin >> a;
    string str = to_string(a);

    bool flag = false;
    for (char ch : str) {
        if (ch == '7') {
            flag = true; break;
        }
    }
    if (flag) {
        if (a%7) cout << 2;
        else cout << 3;
    } else {
        if (a%7) cout << 0;
        else cout << 1;
    }

}