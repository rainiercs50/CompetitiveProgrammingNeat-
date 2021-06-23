int p[mxN], s[mxN], n;

int find(int x){
	return x^p[x]?p[x]=find(p[x]):x;
}
bool join(int a, int b){
	int x=find(a), y=find(b);
	if(x==y) return 0;
	if(s[x]<s[y]) swap(x,y);
	p[y]=x;
	s[x]+=s[y];
	return 1;
}
void init(){
	iota(p, p+n ,0);
	fill(s, s+n, 1);
}
ll kruskal(vector<pair<ll, pair<int,int>>> ed){
	sort(ed.begin(), ed.end());
	ll ans=0;
	for(auto a:ed) if(join(a.second.second,a.second.first)) ans+=a.first;
	return ans;
}
