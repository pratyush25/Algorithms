/*
    -------------------------------------
    |									|
    |	Author - Devjit Choudhury		|
    |	Date   - ___________________ 	|	
    |    	                            |
    -------------------------------------

    Link - 
*/

#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<long, long>
#define vll vector<long long>
#define vpii vector<pair<int,int>>
#define all(v) v.begin(),v.end()
#define f0(i, n) for (int i = 0; i < n; i++) // 0 based indexing
#define f1(i, n) for (int i = 1; i <= n; i++) // 1 based indexing
#define f(i, a, b) for (int i = a; i <= b; i++) // 1 based indexing
#define fll0(i, n) for (long long i = 0; i < n; i++) // 0 based indexing
#define fll1(i, n) for (long long i = 1; i <= n; i++) // 1 based indexing
#define fll(i, a, b) for (long long i = a; i <= b; i++) // 1 based indexing
#define pb push_back
#define fi first
#define se second

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

ll a;
ll res=1;

void solve() {
    cin>>a;
    ll val=2;
    while(a>0){
        if(a%2==1){
            res=(res*val) % MOD;
        }
        val=(val*val)%MOD;
        a=a/2;
    }
    cout<<res%MOD<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
    #endif
    int tc = 1;
    //cin >> tc;
    f1(t,tc) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}