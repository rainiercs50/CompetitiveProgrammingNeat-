int add(int a, int b) {
	return ((1LL * a + b) % MOD + MOD) % MOD;
}
 
int mult(int a, int b) {
	return 1LL * a * b % MOD;
}
 
int pow(int b, int p) {
	int res = 1;
	while (p) {
		if (p & 1) {
			res = mult(res, b);
		}
		p /= 2;
		b = mult(b, b);
	}
	return res;
}
 
int inv(int x) {
	return pow(x, MOD - 2);
}
 
const int mxN = 3e5;
int fact[mxN + 1], ifact[mxN + 1];
 
int nck(int n, int k) {
	if (k > n) {
		return 0;
	}
	return mult(fact[n], mult(ifact[k], ifact[n - k]));
}
 
void init() {
	fact[0] = ifact[0] = 1;
	for (int i = 1; i <= mxN; i++) {
		fact[i] = mult(fact[i - 1], i);
		ifact[i] = mult(ifact[i - 1], inv(i));
	}
}
