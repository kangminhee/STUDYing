#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, l;
    cin >> n >> l;
 
    vector<int> v(n);
 
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
 
    sort(v.begin(), v.end());
 
    for(int i=0; i<n; i++){
        if(v[i] <= l) l+=1;
    }
 
    cout<<l;
 
}
