    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;

    void solve() {
        ll a, b;
        cin >> a >> b;

        if(a == 0) {for(ll i = 1; i <= b; i++) cout << '1'; cout <<'\n'; return;}
        if(b == 0) {for(ll i = 1; i <= a; i++) cout << '0'; cout << '\n'; return;}

        if(a == b) {
            for(ll i = 1; i <= a; i++) cout << "01";
            cout << '\n';
            return;
        }

        string s;

        if(a > b) {
            ll k = b + 1;
            ll q = a / k, r = a % k;
            for(ll i = 0; i < k; i++) {
                ll l = 0;
                if(i < r) l = q + 1;
                else l = q;
                s.append(l, '0');
                if(i < b) s.push_back('1');
            }
            cout << s << '\n';
        }
        else {
            ll k = a + 1;
            ll q = b / k, r = b % k;
            for(ll i = 0; i < k; i++) {
                ll l = 0;
                if(i < r) l = q + 1;
                else l = q;
                s.append(l, '1');
                if(i < a) s.push_back('0');
            }
            cout << s << '\n';
        }
    }



    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        int T;
        cin >> T;
        while(T--) solve();
        
        return 0;
    }