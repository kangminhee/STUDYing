#include <iostream>

using namespace std;
using ll = long long;

int arr[1010] = {0, 1, 3,};

int f(int n) {
    if (n == 0 || arr[n]) return arr[n];
    else {
        arr[n] = (f(n-1)%10007 + 2*f(n-2)%10007)%10007;
        return arr[n];
    }
}

int main() {
    int n; cin >> n;
    f(n);
    cout << arr[n];
    return 0;
}
