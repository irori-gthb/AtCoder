#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, P;
  cin >> N >> P;

  map<ll, ll> mp;
  for (ll i = 2; i * i <= P; i++) {
    if (P % i == 0) {
      while (P % i == 0) {
        mp[i]++;
        P /= i;
      }
    }
  }
  if (P != 1) mp[P]++;

  ll ans = 1;
  for (auto x : mp)
    if (x.second >= N) ans *= pow(x.first, x.second / N);
  cout << ans << endl;
  return 0;
}