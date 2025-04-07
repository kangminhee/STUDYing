#include <bits/stdc++.h>
using namespace std;

int M,d,cur=1;
int main(){
    cin >> M;
    int a, b, s;
    while(M--){
        cin >> a >> b >> s;
        if(s == 1) d = 1 - d;
        cur = cur * (double)b / a;
    }
    cout << d << ' ' << cur;
}