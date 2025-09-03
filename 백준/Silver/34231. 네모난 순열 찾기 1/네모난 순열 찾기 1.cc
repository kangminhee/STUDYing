#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    
    int A[16][16];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    int res = 0;
    
    for (int ai = 0; ai < n; ai++) {
        for (int aj = 0; aj < n; aj++) {
            for (int bi = ai; bi < n; bi++) {
                for (int bj = aj; bj < n; bj++) {
                    // ----------
                    bool ch[257] = {}, flag = true;
                    int x = 0;
                    for (int i = ai; i <= bi; i++) {
                        for (int j = aj; j <= bj; j++) {
                            int num = A[i][j];
                            if (ch[num]) {
                                flag = false;
                                break;
                            } else {ch[num] = true; x = max(x, num);}
                        }
                        if (!flag) break;
                    }
                    if (flag) for (int i = 1; i <= x; i++) {
                        if (ch[i] == false) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag) res++;
                }
            }
        }
    }
    cout << res;
}
