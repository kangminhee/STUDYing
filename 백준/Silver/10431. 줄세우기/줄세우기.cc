#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int p, arr[20], pos, res = 0;
    cin >> p;
    for (int t = 0; t < p; t++) {
        res = 0;
        cin >> arr[0];
        for (int i = 0; i < 20; i++) {
            cin >> arr[i];
        }
        for (int i = 1; i < 20; i++) {
            pos = i;
            for (int j = 0; j < i; j++) {
                if (arr[j] > arr[i]) {
                    pos = j;
                    break;
                }
            }
            res += i - pos;
            int tmp = arr[i];
            for (int j = i - 1; j >= pos; j--) {
                arr[j+1] = arr[j];
            }
            arr[pos] = tmp;
        }
        cout << t+1 << ' ' << res << '\n';
    }
    return 0;
}