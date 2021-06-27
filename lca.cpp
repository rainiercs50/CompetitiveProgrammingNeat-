
struct lca{
	vector<vector<int>> adj, jump;
	vector<int> d, par;
	int n, log;
	void ae(int x, int y){
		adj[x-1].push_back(y-1);
		adj[y-1].push_back(x-1);
	}
	void init(int s, int lg){
		n=s;
		log=lg;
		adj=vector<vector<int>>(n);
		jump=vector<vector<int>>(n, vector<int>(26));
		par=d=vector<int>(n);
		
	}

	void dfs(int u=0, int p=-1){
		par[u]=p;
		jump[u][0]=p;

		for(int j=1; j<log; ++j) {
			if(jump[u][j-1]==-1) continue;
			jump[u][j]=jump[jump[u][j-1]][j-1];
		}
		
		for(int v : adj[u]){
			if(v^p){
				d[v]=d[u]+1;
				dfs(v, u);
			}
		}
		
	}
	int LCA(int x, int y){
		if(d[x]<d[y]) swap(x, y);
		int dif=d[y]-d[x];
		for(int i=0; i<log; ++i) if(dif&(1<<i)) x=jump[x][i];
		for(int i=log; ~log; --log){
			int X=jump[x][i], Y=jump[y][i];
			if(par[X]==par[Y]) continue;
			x=X, y=Y;
		}
		return par[x];
	}
	int dist(int x, int y){
		return d[x]+d[y]-2*d[LCA(x, y)];
	}
	int jmp(int x, int d){
		
		for(int i=0; i<log; ++i) if(d&(1<<i)) x=jump[x][i];
		return x;
	}
};
