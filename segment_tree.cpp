
struct segtree{
	int n;
	vector<ll> tree;
	
	void init(int s){
		n=s;
		tree.resize(4*s);
	}
	ll qry(int i, int j){
		return qry(i, j, 1, 0, n-1);
	}
	void upd(int i, ll v){
		upd(i, v, 1, 0, n-1);
	}
	ll qry(int i, int j, int x, int nowi, int nowj){
		if(i<=nowi&&nowj<=j) return tree[x];
		if(nowi>j||nowj<i) return 0;
		int m=(nowi+nowj)/2;
		return qry(i, j, 2*x, nowi, m)+qry(i, j, 2*x+1, m+1, nowj);
	}
	void upd(int i, ll v, int x, int nowi, int nowj){
		if(nowi==i&&nowj==i){
			tree[x]=v;
			return;
		}
		if(nowi>i||nowj<i) return;
		int m=(nowi+nowj)/2;
		upd(i, v, 2*x, nowi, m);
		upd(i, v, 2*x+1, m+1, nowj);
		tree[x]=tree[2*x]+tree[2*x+1];
	}
};
