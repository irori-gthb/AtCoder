#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;
  map<int, int> mp;
  vector<int> c(N), p(N);
  rep(i, N) cin >> c[i];
  rep(i, N) cin >> p[i];
  rep(i, N) {
    if (mp[c[i]])
      mp[c[i]] = min(p[i], mp[c[i]]);
    else
      mp[c[i]] = p[i];
  }

  vector<int> v;
  for (auto x : mp) v.push_back(x.second);
  sort(v.begin(), v.end());

  if (v.size() < K) {
    cout << -1 << endl;
    return 0;
  }

  ll ans = 0;
  rep(i, K) ans += v[i];
  cout << ans << endl;
  return 0;
}