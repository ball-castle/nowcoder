#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
    ll n;
    cin >> n;

    if(n == 1){
        cout << "YES" << '\n';
        cout << "1" << '\n';
    }
    else if(n == 3) {
        cout << "YES" << '\n';
        cout << "1 2 3" << '\n';
    }
    else cout << "NO" << '\n';
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();

    return 0;
}