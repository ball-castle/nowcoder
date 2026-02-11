#include <bits/stdc++.h>
using namespace std;
using ll = long long;


// 10 ** 8   10 ** 10
// half_division 
void solve() {
    ll n;
    cin >> n;

    ll m = to_string(n).size();
    ll x = 1; 
    for(ll i = 0; i < m - 1; i++) x *= 10;
    for(ll i = x; i * i < n * n; i++) if(i * i > n * x) {cout << i * i << endl; return;}
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}