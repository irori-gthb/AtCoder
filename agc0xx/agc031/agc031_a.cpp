#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  map<char, int> mp;
  rep(i, N) mp[S[i]]++;

  ll ans = 1;
  const ll mod = 1000000007;
  for (auto x : mp) ans *= (x.second + 1), ans %= mod;
  cout << ans - 1 << endl;
  return 0;
}