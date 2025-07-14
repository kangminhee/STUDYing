#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int a; char c;
        cin >> a >> c;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j <=i; j++) {
                if (c+i > 'Z') printf("%c", c+i-'Z'+'A'-1);
                else printf("%c", c+i);
            }
            printf("\n");
        }
        printf("\n");
    }
}