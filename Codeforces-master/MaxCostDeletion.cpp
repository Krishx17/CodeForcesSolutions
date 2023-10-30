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


// Print my DS
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


vector<bool> sievebool(ll n) {vector<bool> isPrime(n + 1, true); for (int i = 2; i * i <= n; i++) {if (isPrime[i]) {for (int j = i * i; j <= n; j = j + i) {isPrime[j] = false;}}} return isPrime;}
long long int_sqrt (long long x) { long long ans = 0; for (ll k = 1LL << 30; k != 0; k /= 2) { if ((ans + k) * (ans + k) <= x) { ans += k;}} return ans;}


// Debugging
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define dbg(x)
#endif

/**************************************************************************************************************************************/

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	string str;
	cin >> str;
	int total = 0;
	//if a is -ve we need to minimize the length of the substring 
	if(a < 0){
			total = (a * 1) + b;
			total *= n;
			cout <<  total << "\n";
			return;
	}
	
	//when a is positive we need to maximize the length of the substring 
	int max, maxSoFar = 0;
	pair<int, int> pi;

	while(n > 0){
		for(int i = 0, j = 0; i < n; i++){  //using for loop to find the max substring
			if(str[i] == str[j]){
				max++;
				continue;
			}
			else{
				if(max > maxSoFar){
					maxSoFar = max;
					max = 0;
					pi = {j, i};
					j = i;
					n -= maxSoFar;
				}
			}
		}
		str.erase(pi.ff, pi.ss);
		total = total + (a * maxSoFar + b);
		maxSoFar = 0;
	}

	cout << total << "\n";
}


int main() {
//     cin.tie(0)->sync_with_stdio(0);
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
