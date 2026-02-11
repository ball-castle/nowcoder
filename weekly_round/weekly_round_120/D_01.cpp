#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 循环小数可以视为以循环节长度的9为底的分数
// 两数相减的小数部分与取模有关，如果为负补一个就行


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m;
    cin >> n >> m;
    string a1, b1;
    cin >> a1 >> b1;

    ll k = n * m;
    string a, b;
    a.reserve(k + 1);
    b.reserve(k + 1);
    
    for(ll i = 0; i < m; i++) a += a1;
    for(ll i = 0; i < n; i++) b += b1;

    bool swapped = 0;
    if(a < b) {
        swapped = 1;
        swap(a, b);
    }
    
    for(ll i = k; i >= 0; i--) {
        ll x = a[i] - '0';
        ll y = b[i] - '0';

        x -= y;
        if(x < 0) x += 10, a[i - 1]--;
        a[i] = char('0' + x);
    }

    if(swapped) {
        for(char &c : a) {
            ll d = c - '0';
            d = 9 - d;
            c = char('0' + d);
        }
    }

    cout << k << '\n' << a << '\n';
    return 0;

}