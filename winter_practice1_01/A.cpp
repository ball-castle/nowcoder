#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod = 998244353;

ll ksm(ll a, ll b) {
	ll sum = 1;
	while(b) {
		if(b & 1) sum = (sum * a) % mod;
		a = (a * a) % mod;
		b = b >> 1;
	}
	return sum;
}

ll m[10] = {119, 36, 93, 109, 46, 107, 123, 37, 127, 111};
ll a = ksm(100, mod - 2);

void solve() {
    int c;
    cin >> c;
    
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) solve();

    return 0;
}