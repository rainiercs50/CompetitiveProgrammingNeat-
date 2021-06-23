struct DSU{
	vector<int> p, s;
	void init(int n){
		p.resize(n);
		s.resize(n);
		iota(p.begin(), p.end(), 0);
		fill(s.begin(), s.end(), 1);
	}
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
	
};


ll kruskal(int n, vector<pair<ll, pair<int,int>>> ed){
	sort(ed.begin(), ed.end());
	ll ans=0;
	DSU d;
	d.init(n);
	for(auto a:ed) if(d.join(a.second.second,a.second.first)) ans+=a.first;
	return ans;
}
