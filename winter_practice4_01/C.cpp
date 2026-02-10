#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a[(1 << 18) + 10];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    ll m = 1 << n, l = 1;
    
    a[0] = 0;

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < l; j++) a[l + j] = a[l - j - 1] | (1 << i);
        l <<= 1;
    }

    for(ll i = 0; i < m; i++) cout << a[i] << ' ';
    cout << '\n';
    
    return 0;
}