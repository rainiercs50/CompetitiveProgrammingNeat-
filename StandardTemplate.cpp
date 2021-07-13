// dont edit this template 
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(v) ((int)(v).size())
#define unique(v) v.erase(unique(v.begin(), v.end()), v.end())

template<class T> using mpq = priority_queue<T, vector<T>, greater<T>>;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int pct(const ll &x) { return __builtin_popcountll(x); } 
int bits(const ll &x) { return 63 - __builtin_clzll(x); }
ll cdiv(const ll &x, const ll &y){ return (x / y) + !!(x % y); }

template<class T> bool chmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; } 
template<class T> bool chmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
template<class T> T uid(const T &a, const T &b){ return uniform_int_distribution<T> (a, b)(rng); }
template<class T> bool inc(const T &a, const T &b, const T &c){ return a <= b && b <= c; }
template<class T> int lb(const vector<T> &v, const T &a){ return lower_bound(all(v), a) - v.begin(); }
template<class T> int ub(const vector<T> &v, const T &a){ return upper_bound(all(v), a) - v.begin(); }
template<class T> int mx(const vector<T> &v){ return max_element(all(v)) - v.begin(); }
template<class T> int mn(const vector<T> &v){ return min_element(all(v)) - v.begin(); }
template<class T> T sum(const vector<T> &v){ return accumulate(all(v), (T)0); }

const int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
const char dir[4] = {'R', 'L', 'D', 'U'}, ed = '\n';
const ll INF = 2e18, MOD = 1e9 + 7;

void solve(int tc){

}
int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout << fixed << setprecision(15);

	int t = 1;
	// cin >> t;
	for(int tc = 0; tc < t; ++tc)
		solve(tc);	
}

