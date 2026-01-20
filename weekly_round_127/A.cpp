#include <bits/stdc++.h>
using namespace std;
using ll = long long;




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll a, b, c;
    cin >> a >> b >> c;
    
    if(a + b == c || a - b == c || a * b == c || (a / b == c && a % b == 0)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}