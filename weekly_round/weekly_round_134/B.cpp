#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    while(c >= x) {
        b += c / x;
        c %= x;
        while(b >= y) {
            a += b / y;
            c += b / y;
            b %= y;
        }
    }

    cout << a << '\n';
    return 0;
}