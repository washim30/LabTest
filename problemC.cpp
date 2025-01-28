#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define OP(ans) cout << ans << '\n' ;
#define MOD 1e9+7
#define FastIO ios::sync_with_stdio(0); cin.tie(0); 

void solve () {
    int n;cin>>n;
    int arr[n],cnt=0;
    vector<int>odd;
    vector<int>even;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2 !=0)
        {
            odd.push_back(arr[i]);
        }
        else
        {
            even.push_back(arr[i]);
        }
    }
    if(odd.size()==0 || even.size()==0){cout<<0<<nl;return;}
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    int maxiodd = odd[odd.size()-1];
    cout<<maxiodd<<nl;
    cnt = even.size();
    for(auto m : even)
    {
        if(maxiodd < m)
        {
            cnt++;
            break;
        }
        else
        {
            maxiodd+=m;
        }
    }
    cout<<cnt<<nl;  
}
int main() {
    FastIO;
    int t = 1 ;
    cin >> t ;
    while(t--) solve () ;
}