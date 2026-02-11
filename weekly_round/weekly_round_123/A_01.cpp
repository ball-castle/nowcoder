#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n1, n2; 
    char c1, c2;
    cin >> n1 >> c1;
    cin >> n2 >> c2;

    if(n1 > n2) cout << "Yes" << endl;
    else if(n1 < n2) cout << "No" << endl;
    else if(c1 < c2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}