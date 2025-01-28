#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define int long long

void solve() {
    int n;
    cin >> n;
    int arr[n];
    int mn = INT_MAX, mx = INT_MIN;
    for( int i = 0; i < n; i++ ){
            cin >> arr[i];
            mn = min( mn, arr[i] );
            mx = max( mx, arr[i] );
    }
    if( arr[0]==arr[n-1] ) {
        return cout << "NO\n", void();
    }
    else {
        cout << "YES\n";
        bool f1 = 0, f2 = 0, f3 = 0;

        for( int i =  0; i < n; i++ ) {
            if( !f1 && arr[i] == mn )
                cout << "B", f1 = 1;

            else if(!f2 && arr[i] == mx ) 
                cout << "B", f2 = 1;

            else if( !f3 )
                cout << "R", f3 = 1;

            else  cout << "B";
        }
        cout << '\n';

    }
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc = 1; 
    cin >> tc;
    for( int t = 1; t <= tc; t++ ) {
        solve();
    }
}