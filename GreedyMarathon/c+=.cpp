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
#define ln 					'\n';
#define ss                  second
#define pb                  push_back
#define sz(v)               ll(v.size())
#define all(v)              v.begin(), v.end()
#define forn(i,n)           for(ll i = 0; i < n; i++)
#define yy                  cout << "YES\n"
#define nn                  cout << "NO\n"
#define ms0(X)              memset((X), 0, sizeof((X)))
#define ms1(X, V)           memset((X), V, sizeof((X)))

// Debugging
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define dbg(x)
#endif

/**************************************************************************************************************************************/
  

void solve(){
	ll a, b, n; cin >> a >> b >> n;
	ll moves = 1;
	if(a > b) swap(a, b);
	a += b;
	while(true){
		if(a > n || b > n){
			break;
		}
		if(a > b) swap(a,b);
		a+=b;
		moves++;
	}
	cout << moves << '\n';
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
// #ifndef ONLINE_JUDGE
//     freopen("Error.txt", "w", stderr);
// #endif
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int tc;
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}