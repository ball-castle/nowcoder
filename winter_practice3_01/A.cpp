#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll x, f = 0;
    cin >> x;
    for(int i = 0; i <= 100; i++) if(i * (i + 1) == x) f = 1;
    if(f) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    
    return 0;
}