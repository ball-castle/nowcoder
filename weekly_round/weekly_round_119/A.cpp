#include <bits/stdc++.h>
using ll = long long;
using namespace std;



int main() {
    ll x, y, p1, p2;
    cin >> x >> y >> p1 >> p2;
    
    if(x > y) cout << "A" << endl;
    if(x < y) cout << "B" << endl;
    if(x == y) {
        if(p1 < p2) cout << "A" << endl;
        if(p1 > p2) cout << "B" << endl;
        if(p1 == p2) cout << "C" << endl;
    }
    return 0;
}