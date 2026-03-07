#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// https://ac.nowcoder.com/acm/contest/127676/A
/*
n = 3, m = 4;
1 1 0 0
0 1 1 0
0 0 1 1
every line two 1
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;
    if(abs(n - m) > 1) {cout << -1 << '\n'; return 0;}
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= m; j++) {
            if(n <= m) {
                if(i == j || i == j - 1) cout << '1';
                else cout << '0';
            }
            else {
                if(i == j || i == j + 1) cout << '1';
                else cout << '0';
            }
        }
        cout << '\n';
    }


    return 0;
}