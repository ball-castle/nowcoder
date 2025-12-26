#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m;
    cin >> n >> m;
    
    ll ans = 0;
    if(n > m) swap(n, m);
    
    if(n == 1) ans = 1;
    else if(n == 2) ans = (m + 1) / 2;   
    else if(m == 3) ans = 8;
    else ans = n * m;
    
    cout << ans << endl;
    return 0;
}