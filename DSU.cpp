
int p[mxN], s[mxN];

int find(int x){
	return x^p[x]?p[x]=find(p[x]):x;
}
void join(int a, int b){
	int x=find(a), y=find(b);
	if(x==y) return;
	if(s[x]<s[y]) swap(x,y);
	p[y]=x;
	s[x]+=s[y];
}
void init(int n){
	iota(p, p+n ,0);
	fill(s, s+n, 1);
}
