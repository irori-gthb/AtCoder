#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
const ll mod = 1000000007;

int main() {
  int N;
  cin >> N;

  ll ans = 1;
  for (ll i = 1; i <= N; i++) {
    ans = (ans * i) % mod;
  }
  cout << ans << endl;
  return 0;
}