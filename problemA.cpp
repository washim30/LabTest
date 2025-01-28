#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define int long long
const int N = 1e5;

void solve() {
    string t;
    cin >> t;
    int n = t.size();
    string s_prime = "", s = "";

    for(int i = n-1; i >= 0; i--) {
        if(t[i] != 'a') {
            s_prime += t[i];
        } else  {
            break;
        }
    }
    int m = s_prime.size();
    // cout << s_prime << '\n';

    for(int i = 0; i < n-m; i++) {
        if(t[i] != 'a') {
            s += t[i];
        }
    }
    int a = s.size();

    while(m > a) {
        s += s_prime.back();
        s_prime.pop_back();
        m--, a++;
    }
    reverse(s_prime.begin(), s_prime.end());
    // cout << s << " " << s_prime << '\n';

    if(s == s_prime) {
        cout << t.substr(0, n-m);
    } else {
        cout << ":(";
    }
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc = 1; 
    // cin >> tc;
    for( int t = 1; t <= tc; t++ ) {
        solve();
    }
}