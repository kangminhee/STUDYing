#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a*8 + b*3 > 28)  cout << (a*8 + b*3) - 28;
    else cout << 0;
}