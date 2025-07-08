#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, res = 0; cin >> t;
    string a;
    vector<string> v;
    while (t--) {
        cin >> a;
        if (!a.compare("ENTER")) {
            if (v.empty()) continue;
            sort(v.begin(), v.end());
            v.erase(unique(v.begin(), v.end()), v.end());
            res += v.size();
            v = {};
        }
        else v.push_back(a);
    }
    if (!v.empty()) {
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        res += v.size();
    }
    
    cout << res;
}