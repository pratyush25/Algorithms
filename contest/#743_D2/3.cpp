
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
#define ull unsigned long long
#define lld long double
#define vi vector<int>
#define vb vector<bool>
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
#define endl '\n'

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
const ll INF = 1e18;



void solve() {
    ll n2, n3, n4;
    cin>>n2>>n3>>n4;
    debug(n2);
    debug(n3);
    debug(n4);
    ll temp;

    ll arr[5][3] = {{1,0,2}, {0,2,1}, {3,0,1}, {2,2,0}, {5,0,0}};
    vll v = {0,1,2,3,4};
    ll finalans = 0;
    sort(all(v));
    do{
        debug(v);
        ll ans = 0;        
        ll n22 = n2, n33 = n3, n44 = n4;
        for(ll i : v){
            debug("lol");
            ll temp = INF;
            ll x1;
            if(arr[i][0]!=0)    x1 = n22/arr[i][0];
            else x1 = -1;
            ll x2;
            if(arr[i][1]!=0)    x2 = n33/arr[i][1];
            else x2 = -1;
            ll x3;
            if(arr[i][2]!=0)    x3 = n44/arr[i][2];
            else x3 = -1;
            debug("lol");
            debug(x1);
            debug(x2);
            debug(x3);
            temp = min((x1>=0?x1:INF), min((x2>=0?x2:INF), (x3>=0?x3:INF)));
            debug("lol");
            if(temp==INF)   break;
            debug(temp);
            ans += temp;
            n22 = n22 - temp*(arr[i][0]); 
            n33 = n33 - temp*(arr[i][1]); 
            n22 = n22 - temp*(arr[i][2]); 
        }
        debug(ans);
        finalans = max(ans, finalans);
    }while(next_permutation(all(v)));

    cout<<finalans<<endl;

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
    cin >> tc;
    f1(t,tc) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}


/*
 // (1,0,2)
    temp = min(n2, n4/2);
    ans += temp;
    n2 -= temp;
    n4 -= temp*2;

    //(0,2,1)
    temp = min(n3/2, n4);
    ans += temp;
    n3 -= temp*2;
    n4 -= temp;
    
    //(3,0,1)
    temp = min(n2/3, n4);
    ans += temp;
    n2 -= temp*3;
    n4 -= temp;

    //(2,2,0)
    temp = min(n2/2, n3/2);
    ans += temp;
    n2 -= temp*2;
    n3 -= temp*2;

    //(5,0,0)
    temp = n2/5;
    ans += temp;
    n2 -= temp*5;
    */