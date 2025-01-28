#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
#define OP(ans) cout << ans << '\n' ;
#define MOD 1e9+7
#define FastIO ios::sync_with_stdio(0); cin.tie(0); 


void solve() {
    int n;
    cin >> n;
    vector<int>odd;
    vector<int>even;
    for( int i = 0; i < n; i++ ) {
        int a;
        cin >> a;
        if( a%2 !=0 ) 
        {
            odd.push_back(a);
        }
        else 
        {
            even.push_back(a);
        }
    }
    if( odd.size()==0 || even.size()==0 ) {
        cout << 0 <<endl;
        return;
    }
    int cnt = even.size();
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    int maxiodd = odd.back();

    for( auto m: even ) {
        if( maxiodd < m ) {
            cnt++;
            break;
        } else {
            maxiodd += m;
        }
    }
    cout << cnt << endl;
}
int32_t main() {
    FastIO;
    int t = 1 ;
    cin >> t ;
    while(t--) solve () ;
}
