/*
    -------------------------------------
    |									|
    |	Author - Devjit Choudhury		|
    |	Date   - 2021-06-29 12:50:52 	|	
    |    	                            |
    -------------------------------------

    Link - https://codeforces.com/gym/334536/problem/C
    Contest - #678_D2_C
*/

#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define ull unsigned long long
#define lld long double
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
#define ff first
#define ss second
#define mp make_pair

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll w) {cerr << w;}
void _print(int w) {cerr << w;}
void _print(string w) {cerr << w;}
void _print(char w) {cerr << w;}
void _print(lld w) {cerr << w;}
void _print(double w) {cerr << w;}
void _print(ull w) {cerr << w;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    ll n,x,pos;
    cin>>n>>x>>pos;
    ll left=0, right=n;
    vll temp;
    ll c1=0,c2=0;
    vi a(n);
    f0(i,n) a[i]=-1;
    while (left < right) {
		ll mid = (left + right)/2;
		if (mid <= pos) {
			left = mid + 1;
			a[mid] = 0;
		} else {
			right = mid;
			a[mid] = 1;
		}
	}
    // f0(i,n) cout<<a[i]<<" ";
    // cout<<endl;
	for (ll i = 0; i < n; i++) {
		if (i == pos) {
			continue;
		}
		if (a[i] == 1) {
			c2++;
		}
		if (a[i] == 0) {
			c1++;
		}
	}

	ll ans = 1;
	for (ll i = x - 1; i >= x - c1; i--) {
		ans = ans * i % MOD;
	}
	for (ll i = n - x; i >= n - x - c2 + 1; i--) {
		ans = ans * i % MOD;
	}
	for (ll i = 1; i <= n - c1 - c2 - 1; i++) {
		ans = ans * i % MOD;
	}
	cout << ans << endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      freopen("error.txt", "w", stderr);
    #endif
    int tc = 1;
    //cin >> tc;
    f1(t,tc) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}