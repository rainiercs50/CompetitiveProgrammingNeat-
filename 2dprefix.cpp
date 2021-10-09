// dont edit this template 
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using db = long double;

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
template <typename I> struct _reversed_struct { I &v_; explicit _reversed_struct(I &v) : v_{v} {} typename I::reverse_iterator begin() const { return v_.rbegin(); } typename I::reverse_iterator end() const { return v_.rend(); } };
template <typename I> _reversed_struct<I> reversed(I &v) { return _reversed_struct<I>(v); }

const int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
const char dir[4] = {'R', 'L', 'D', 'U'}, ed = '\n';
const ll INF = 2e18, MOD = 1e9 + 7, mxN = 1e5 + 5;

// #define int long long 


void solve(int tc){
    int h, w;
	cin >> h >> w;
	vector<string> a(h);
	for(auto &i : a)
		cin >> i;
	vector<vector<int>> pref(h+1, vector<int>(w+1));
	for(int i = 0; i < h; ++i)
		for(int j = 0; j < w; ++j)
			pref[i+1][j+1] = pref[i][j+1] + pref[i+1][j] - pref[i][j] + (a[i][j] - '0');
	auto f = [&](int r1, int c1, int r2, int c2){
		return pref[r2+1][c2+1] - pref[r1][c2+1] - pref[r2+1][c1] + pref[r1][c1];
	};
	

	

}
int32_t main(){
	auto setIO = [](string s = ""){
		ios::sync_with_stdio(0); 
		cin.tie(0); 
		cout << fixed << setprecision(15);
		if(sz(s)){
			freopen((s + ".in").c_str(), "r", stdin);
			freopen((s + ".out").c_str(), "w", stdout);
		}
	};
	setIO();
	int t = 1;
	cin >> t;
	for(int tc = 0; tc < t; ++tc)
		solve(tc);
		
#ifdef __APPLE__
    cerr << ed << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;	
}
