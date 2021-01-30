#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  int ans = 0;
  map<ll, ll> mp;
  for (ll i = 1; i * i <= 2 * N; i++) {
    if (2 * N % i == 0) {
      if ((i - (2 * N / i - 1)) % 2 == 0) ans++;
    }
  }
  cout << 2 * ans << endl;
  return 0;
}