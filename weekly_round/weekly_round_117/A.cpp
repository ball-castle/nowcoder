#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    ll a, b;
    cin >> a >> b;
    if(a == 1 && b == 1) cout << "LU" << endl;
    if(a == 1 && b == 2) cout << "LD" << endl;
    if(a == 2 && b == 1) cout << "RU" << endl;
    if(a == 2 && b == 2) cout << "RD" << endl;

    return 0;
}