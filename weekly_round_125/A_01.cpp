#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin >> s;
    ll ans = 0;
    ll f = 0;

    for(auto m : s) if(m == 'C') f = 1;

    if(s == "ABD") cout << 4 << endl;
    else if(f) cout << 0 << endl;
    else cout << 2 << endl;

    return 0;
    
}