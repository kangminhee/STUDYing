#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, tmp, res = 0, cont = 0; cin >>n;
    int arr[101] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> tmp;
            arr[tmp]++;
        }
    }
    for (int i = 1; i <= 100; i++) {
        for (int j = i+1; j <= 100; j++) {
            for (int k = j+1; k <= 100; k++) {
                arr[i]++; arr[j]++; arr[k]++;
                for (int x = 100; x > 0; x--) {
                    if (arr[x] == 1) {
                        if (x == i || x == j || x == k) res++;
                        break;
                    }
                }
                arr[i]--; arr[j]--; arr[k]--;
            }
        }
    }
    cout << res;
    return 0;
}