#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    ll d = n % 10;

    if(d == 0) cout << 1 << '\n';
    else if(d == 5) cout << 2 << '\n';
    else if(n % 2 == 0) cout << 5 << '\n';
    else cout << 10 << '\n';

    return 0;
}