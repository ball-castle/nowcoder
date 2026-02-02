#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll c, d;
    cin >> c >> d;
    cout << fixed << setprecision(4) << (double)d * 100 / c << '%' << '\n';
    return 0;
}