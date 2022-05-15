#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <list>
#include <time.h>
#include <math.h>
#include <random>
#include <deque>
#include <queue>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <bitset>
#include <sstream>
#include <chrono>
#include <cstring>


using namespace std;

#define ll long long 
#define sz(v) ((int)(v).size())
#define all(x) x.begin(), x.end()

int pct(const ll &x) { return __builtin_popcountll(x); } 
int bits(const ll &x) { return 63 - __builtin_clzll(x); }
ll cdiv(const ll &x, const ll &y){ return (x / y) + !!(x % y); }

template<class T> bool chmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; } 
template<class T> bool chmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
template<class T> int ran(const T& min, const T& max) { return rand() % (max - min + 1) + min; }

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifdef __APPLE__
#define dbg(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...)
#endif

const int MOD = 1e9 + 7;
const char ed = '\n';
const ll INF = 1e18;
const int mxN = 1e5 + 5;

void solve(int tc){

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    for(int i = 1; i <= t; ++i)
        solve(i);
}
