#include <bits/stdc++.h>
using namespace std;
using ll = long long; // prefix sum

struct ct {
    ll a, b, c;
};

ct calc(long long n) {
    if (n <= 0) return {0, 0, 0};
    ll full = n / 3;
    ll rem  = n % 3;
    ct res = {full, full, full};
    if (rem >= 1) res.a++;
    if (rem >= 2) res.b++;
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    ll l, r;
    cin >> l >> r;
    
    ct R = calc(r);
    ct L = calc(l - 1);

    cout << R.a - L.a << " "
         << R.b - L.b << " "
         << R.c - L.c << "\n";

    return 0;
    
    
}