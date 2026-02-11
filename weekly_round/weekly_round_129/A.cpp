#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll x;
    cin >> x;
    if(x > x * x) cout << "left" << '\n';
    else if(x < x * x) cout << "right" << '\n';
    else cout << "equal" << '\n';

    return 0;
}