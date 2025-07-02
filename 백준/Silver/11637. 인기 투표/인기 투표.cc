#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        
        int Max=0, same=0, candi=0, total=0;
        for (int i = 1; i <= n; i++) {
            int a; cin >> a;
            total += a;
            if (a == Max) same++;
            
            if (Max < a) {
                Max = a;
                candi = i;
                same = 0;
            }
        }
        if (same > 0) cout << "no winner\n";
        else if (Max > total/2) cout << "majority winner " << candi << '\n';
        else if (Max <= total/2) cout << "minority winner " << candi << '\n';
        else cout << "no winner\n";
    }
    return 0;
}