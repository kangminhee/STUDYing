#include <iostream>

using namespace std;

int main() {
    int h, w, n, m, i, j;
    cin >> h >> w >> n >> m;

    i = w/(m+1);
    if (w%(m+1)) i++;
    j = h/(n+1);
    if (h%(n+1)) j++;

    cout << i * j;

    return 0;
}