#include <iostream>
using namespace std;

int main() {
    int D[101010], n;
    cin >> n;

    D[1] = 1; D[2] = 2;

    for(int i = 3; i <= n; i++) {
        D[i] = (D[i-1] + D[i-2]) % 10007;
    }
    
    cout << D[n];
    return 0;
}
