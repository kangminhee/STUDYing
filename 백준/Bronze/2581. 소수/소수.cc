#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long sum = 0, min = -1;
    int n, m; cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (i == 1) continue;
        int boool = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                boool = 0;
                break;
            }
        }
        if (boool) {
            if (min == -1) min = i;
            sum += i;
        }
    }
    
    if (sum == 0) {
        cout << -1;
        return 0;
        }
    cout << sum << '\n' << min;
    return 0;
}