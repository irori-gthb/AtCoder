#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

struct UnionFind {
  vector<int> par;

  UnionFind(int N) : par(N) {
    for (int i = 0; i < N; i++) par[i] = i;
  }

  int root(int x) {
    if (par[x] == x) return x;
    return par[x] = root(par[x]);
  }

  void unite(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    if (rx == ry) return;
    par[rx] = ry;
  }

  bool same(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }
};

int main() {
  ll N, M;
  cin >> N >> M;
  UnionFind uf(N);
  vector<ll> a(N), b(N);
  rep(i, N) cin >> a[i];
  rep(i, N) cin >> b[i];
  rep(i, M) {
    ll c, d;
    cin >> c >> d;
    uf.unite(c - 1, d - 1);
  }

  vector<ll> asum(N, 0), bsum(N, 0);
  rep(i, N) {
    asum[uf.root(i)] += a[i];
    bsum[uf.root(i)] += b[i];
  }

  rep(i, N) {
    if (asum[i] != bsum[i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}