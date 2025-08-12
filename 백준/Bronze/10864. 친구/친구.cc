#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, a, b;
    cin >> n >> m;

    int arr[1010] = {};
 
    for (int i=0; i<m; i++) {
        cin >> a >> b;
        arr[a]++; arr[b]++;
    }
 
    for (int i=1; i<n+1; i++) {
        cout << arr[i] << '\n';
    }
  
    return 0;
}
 