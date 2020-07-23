struct mint {
  ll x;
  mint() : x(0) {
  }
  mint(ll x) : x((x % MOD + MOD) % MOD) {
  }
  mint& operator+=(const mint& r) {
    if ((x += r.x) >= MOD) {
      x -= MOD;
    }
    return *this;
  }
  mint& operator-=(const mint& r) {
    if ((x -= r.x) < 0) {
      x += MOD;
    }
    return *this;
  }
  mint& operator*=(const mint& r) {
    if ((x *= r.x) > MOD) {
      x %= MOD;
    }
    return *this;
  }
  mint& operator++() {
    if ((++x) >= MOD) {
      x -= MOD;
    }
    return *this;
  }
  mint operator++(int) {
    mint ret = x;
    if ((++x) >= MOD) {
      x -= MOD;
    }
    return ret;
  }
  mint& operator--() {
    if ((--x) < 0) {
      x += MOD;
    }
    return *this;
  }
  mint operator--(int) {
    mint ret = x;
    if ((--x) < 0) {
      x += MOD;
    }
    return ret;
  }
  mint operator+(const mint& r) {
    mint ret;
    return ret = x + r.x;
  }
  mint operator-(const mint& r) {
    mint ret;
    return ret = x - r.x;
  }
  mint operator*(const mint& r) {
    mint ret;
    return ret = x * r.x;
  }
  mint operator-() {
    return mint() - *this;
  }
  mint pow(ll t) {
    if (!t) return 1;
    mint a = pow(t >> 1);
    a *= a;
    if (t & 1) a *= *this;
    return a;
  }
  bool operator<(const mint& a) {
    return x < a.x;
  }
  bool operator>(const mint& a) {
    return x > a.x;
  }
  bool operator<=(const mint& a) {
    return x <= a.x;
  }
  bool operator>=(const mint& a) {
    return x >= a.x;
  }
  bool operator==(const mint& a) {
    return x == a.x;
  }
  bool operator!=(const mint& a) {
    return x != a.x;
  }
};
ostream& operator<<(ostream& os, const mint& r) {
  os << r.x;
  return os;
}
ostream& operator>>(ostream& os, const mint& r) {
  os >> r.x;
  return os;
}