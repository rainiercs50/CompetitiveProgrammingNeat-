
vector<ll> smallest_factor;
vector<bool> prime;
vector<ll> primes;
 
void sieve(int maximum) {
    maximum = max(maximum, 1);
    smallest_factor.assign(maximum + 1, 0);
    prime.assign(maximum + 1, true);
    prime[0] = prime[1] = false;
    primes = {};
 
    for (ll p = 2; p <= maximum; p++)
        if (prime[p]) {
            smallest_factor[p] = p;
            primes.push_back(p);
 
            for (int64_t i = int64_t(p) * p; i <= maximum; i += p)
                if (prime[i]) {
                    prime[i] = false;
                    smallest_factor[i] = p;
                }
        }
}

vector<pair<ll, ll>> factors(int n){
	if(!primes.size()){
		cerr << "COMPUTE PRIMES FIRST" << endl;
	}
	vector<pair<ll, ll>> f;
	
	for(auto i : primes){
		ll z=i*i;
		if(z>n||n==1) break;
		if(n%i==0){
		
			f.push_back({i, 1});
			n/=i;
			while(n>1&&n%i==0){
				n/=i;
				f.back().second++;
			}
		}
	}
	if(n>1) f.push_back({n, 1});
	return f;
}
vector<ll> getdivs(ll n) {
    vector<ll> divs;
    for (ll i = 1; i * i <= n; i++) {
      if (n % i == 0) {
        divs.push_back(i);
        divs.push_back(n / i);
      }
    }
	sort(divs.begin(), divs.end()); divs.erase(unique(divs.begin(), divs.end()), divs.end());
	return divs;
}
vector<ll> getdivsfast(int n){
	vector<pair<ll, ll>> z=factors(n);
	vector<ll> f{1};
	for(auto p : z){
			vector<ll> st;
			int N=f.size();
			
			for(int r=0; r<N; ++r){
				int v=1;
				for(int rep=0; rep<p.second; ++rep){
					v*=p.first;
					f.push_back(v*f[r]);
				}
			}
		}
	return f;

}
