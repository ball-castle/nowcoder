#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// construction problem
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

void solve() {
    ll a, b;
    cin >> a >> b;

    ll x = 0, y = 0;
    if(a == 1) {
        if(b == 0) x = 1, y = 100;
        else x = b, y = 10;
    }
    else {
        if(b == 0) x = 1, y = 2;
        else if(b == 9) {
            if(a % 2 == 0) x = 1, y = 11;
            else x = 1, y = 110;
        }
        else x = b, y = 9;
    }

    ll g = gcd(x, y);
    cout << (x / g) << ' ' << (y / g) << '\n';
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll T;
    cin >> T;
    while(T--) solve();

    return 0;
}