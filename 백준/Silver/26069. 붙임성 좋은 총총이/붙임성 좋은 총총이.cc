#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int t, res = 0; cin >> t;
    string a, b;
    set<string> s;
    s.insert("ChongChong");
    while (t--) {
        cin >> a >> b;
        if (s.find(a) != s.end() || s.find(b) != s.end()) {
            s.insert(a);
            s.insert(b);
        }
    }
    
    cout << s.size();
}