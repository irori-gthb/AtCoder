#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  ll C;
  cin >> N >> C;

  map<int, ll> s, e;
  set<ll> st;
  ll a, b, c;
  rep(i, N) {
    cin >> a >> b >> c;
    st.insert(a);
    st.insert(b + 1);
    st.insert(c);
    s[a] += c;
    e[b + 1] += c;
  }
  vector<ll> v(st.begin(), st.end());

  ll ans = 0;
  ll calc = 0;
  rep(i, v.size()) {
    calc += s[v[i]] - e[v[i]];
    if (i != v.size() - 1) ans += min(C, calc) * (v[i + 1] - v[i]);
  }
  cout << ans << endl;
  return 0;
}