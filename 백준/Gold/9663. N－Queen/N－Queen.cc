#include <bits/stdc++.h>
using namespace std;

int arr[15];
int n, res;

void sol(int x) {
    if (x == n) {
        res++;
        // cout << "hi\n";
        return;
    }
    
    for (int i = 0; i < n; i++) {
        bool flag = false;
        for (int j = 0; j < x; j++) {
            if (arr[j] == i || abs(arr[j]-i) == abs(x-j)) {
                flag = true;
                break;
            }
        }
        if(flag) continue;
        arr[x] = i;
        sol(x+1);
    }
}

int main() {
    cin >> n;
        sol(0);
        cout << res << '\n';

    return 0;
}