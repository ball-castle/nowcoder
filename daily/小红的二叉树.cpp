#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;

ll ksm(ll a, ll b) {
    ll sum = 1;
    while(b) {
        if(b & 1) sum = (sum * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return sum;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    
    ll ans = 0;
    for(ll i = 1; i <= n - 2; i++) ans += ksm(2ll, i + 1), ans %= mod;// 4 8
    ans += ksm(2ll, n - 1) - 1, ans %= mod;

    cout << ans << '\n';
    
    return 0;
}


/*
1  2 ** (h + 1) (h <= H - 2)
2 H - 1 2 ** (H - 1) - 1

*/