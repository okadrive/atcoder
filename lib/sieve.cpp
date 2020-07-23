using P = pair<int, int>;

// 素因数分解
vector<P> decompositPrime(int n) {
  vector<P> res;
  int s = sqrt(n);
  FOR(i, 2, s) {
    int p = 0;
    while (n % i == 0) {
      p++;
      n /= i;
    }
    if (p != 0) res.emplace_back(i, p);
  }
  return res;
}
