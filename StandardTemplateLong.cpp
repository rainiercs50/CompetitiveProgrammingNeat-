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
template<class T> int lb(const vector<T> &v, const T &a){ return lower_bound(all(v), a) - v.begin(); }
template<class T> int ub(const vector<T> &v, const T &a){ return upper_bound(all(v), a) - v.begin(); }
 
const int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
const char dir[4] = {'R', 'L', 'D', 'U'}, ed = '\n';
const ll INF = 2e18, MOD = 1e9 + 7, mxN = 2e5 + 5;

 
template <typename A, typename B>
string to_string(pair<A, B> p);
 
template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p);
 
template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p);
 
string to_string(const string& s) {
  return '"' + s + '"';
}
 
string to_string(const char* s) {
  return to_string((string) s);
}
 
string to_string(bool b) {
  return (b ? "true" : "false");
}
 
string to_string(vector<bool> v) {
  bool first = true;
  string res = "{";
  for (int i = 0; i < static_cast<int>(v.size()); i++) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(v[i]);
  }
  res += "}";
  return res;
}
 
template <size_t N>
string to_string(bitset<N> v) {
  string res = "";
  for (size_t i = 0; i < N; i++) {
    res += static_cast<char>('0' + v[i]);
  }
  return res;
}
 
template <typename A>
string to_string(A v) {
  bool first = true;
  string res = "{";
  for (const auto &x : v) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(x);
  }
  res += "}";
  return res;
}
 
template <typename A, typename B>
string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}
 
template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p) {
  return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")";
}
 
template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p) {
  return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ", " + to_string(get<3>(p)) + ")";
}
 
void debug_out() { cerr << endl; }
 
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr << " " << to_string(H);
  debug_out(T...);
}
 
// #ifdef __APPLE__
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
// #else
// #define dbg(...) 42
// #endif
 
// #define int long long 
 
void solve(int tc){
  vector<int> a{1, 2, 3};
  // dbg(a);

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
 
