/*▄███████▀▀▀▀▀▀███████▄
░▐████▀▒▒писатель▒▀██████▄
░███▀▒▒▒▒Кришнеш▒▒▒▒▀█████
░▐██▒▒▒▒Чаурасия▒▒▒▒▒████▌
░▐█▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▌
░░█▒▄▀▀▀▀▀▄▒▒▄▀▀▀▀▀▄▒▐███▌
░░░▐░░░▄▄░░▌▐░░░▄▄░░▌▐███▌
░▄▀▌░░░▀▀░░▌▐░░░▀▀░░▌▒▀▒█▌
░▌▒▀▄░░░░▄▀▒▒▀▄░░░▄▀▒▒▄▀▒▌
░▀▄▐▒▀▀▀▀▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒█
░░░▀▌▒▄██▄▄▄▄████▄▒▒▒▒█▀
░░░░▄█████████████  █▒▒▐▌
░░░▀███▀▀████▀█████▀▒▌
░░░░░▌▒▒▒▄▒▒▒▄▒▒▒▒▒▒▐
░░░░░▌▒▒▒▒▀▀▀▒▒▒▒▒▒▒▐*/

#include <bits/stdc++.h>
using namespace std;

typedef                     long long ll;
typedef                     long double lld;
typedef                     vector<ll> vl;
typedef                     vector<string> vs;
typedef                     vector<vl> vvl;
typedef                     pair<ll, ll> pl;
typedef                     unsigned long long ull;
#define _mod                1000000007
#define ff                  first
#define ln 					'\n'
#define ss                  second
#define pb                  push_back
#define sz(v)               ll(v.size())
#define all(v)              v.begin(), v.end()
#define forn(i,n)           for(ll i = 0; i < n; i++)
#define yy                  cout << "YES\n"
#define nn                  cout << "NO\n"
#define ms0(X)              memset((X), 0, sizeof((X)))
#define ms1(X, V)           memset((X), V, sizeof((X)))

// Print my stuff
void _print(ll t)           {cerr << t;}
void _print(int t)          {cerr << t;}
void _print(string t)       {cerr << t;}
void _print(char t)         {cerr << t;}
void _print(lld t)          {cerr << t;}
void _print(double t)       {cerr << t;}
void _print(ull t)          {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(unordered_map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << endl << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ \n"; for (auto i : v) {_print(i); cerr << endl;} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template<typename T> T pow(T a, T b, long long m) {T ans = 1; while (b > 0) { if (b % 2 == 1) ans = (ans * a) % m; b /= 2; a = (a * a) % m; } return ans % m; }

// Debugging
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define dbg(x)
#endif

/**************************************************************************************************************************************/
  
void solve(){
	ll n; cin >> n;
	vector<ll> v(n);
	for(ll i = 0; i < n; i++){
		ll x; cin >> x;
		v[i] =x;
	}

	sort(v.begin(), v.end());

	ll k; cin >> k;
	while(k--){
		ll l, r; cin >> l >> r;
		//first value that is greater than or equal to x (lower bound).
		ll low = 0, up = n-1;
		ll ans = 0;
		while(low <= up){
			ll mid = low + (up - low)/2;
			if(v[mid] >= l){
				ans = mid;
				up = mid - 1;
			}
			else{
				low = mid + 1;
			}
		}

		//first value that is less than or equal to x (upper bound).
		ll low1 = 0, up1 = n-1;
		ll ans1 = 0;
		while(low1 <= up1){
			ll mid1 = low1 + (up1 - low1)/2;
			if(v[mid1] <= r){
				ans1 = mid1;
				low1 = mid1 + 1;
			}
			else{
				up1 = mid1 - 1;
			}
		}
		dbg(ans1);

		if(ans > ans1){
			cout << 0 << " ";
		}
		else cout << abs(ans - ans1) + 1 << " ";
	}
}
int main() {

    cin.tie(0)->sync_with_stdio(0);
    
    solve();

    return 0;

}