using P = pair<int, int>;

// $BAG0x?tJ,2r$N7k2L$r(Bpair$B7?$GJV$9(B
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