#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    if(n == 1) {cout << 1 << '\n'; return 0;}
    if(n == 2 || n == 3) {cout << -1 << '\n'; return 0;}
    if(n == 4) {cout << "2 4 1 3" << '\n'; return 0;}
    if(n == 5) {cout << "2 4 1 3 5" << '\n'; return 0;} 
    
    ll mo = n, me = n;
    if(n % 2 == 0) mo--;
    else me--;

    for(ll i = mo; i >= 5; i -= 2) cout << i << ' ';
    cout << "2 4 1 3" << '\n';
    for(ll i = 6; i <= me; i += 2) cout << i << ' ';
    cout << '\n';

    return 0;
}