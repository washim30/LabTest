// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define nl '\n'
// #define OP(ans) cout << ans << '\n' ;
// #define MOD 1e9+7
// #define FastIO ios::sync_with_stdio(0); cin.tie(0); 

// void solve() {
//     int n;
//     cin >> n;
//     int a[n][n];

//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//     int sum = 0;
//     for(int i=n-1; i>=0; i--)
//     {
//         for(int j=n-1; j>=0; j--)
//         {
//             if(a[i][j]<0)
//             {
//             int m = -a[i][j];
//             for(int k=0; k<=min(i,j); k++)
//             {
//                 a[i-k][j-k]+=m;
//             }
//             sum+=m;
//         }
//     }
//     }
//     cout<<sum<<nl;
// }
// int main() {
//     FastIO;
//     int t = 1 ;
//     cin >> t ;
//     while(t--) solve () ;
// }


#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++ )
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=n-1; i>=0; i--)
    {
        for(int j=n-1; j>=0; j--)
        {
            if(a[i][j]<0)
            {
                int x = -a[i][j];
                {
                    for(int k=0; k<=min(i,j); k++)
                    {
                        a[i-k][j-k]+=x;
                    }
                    sum+=x;
                }  
            }
        }
    }
    cout<<sum<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while(t--) solve();
}
