#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    
    string m = s;
    reverse(m.begin(), m.end());

    if(s > m) cout << "left" << '\n';
    else if(s < m) cout << "right" << '\n';
    else cout << "equal" << '\n';

    return 0;
}