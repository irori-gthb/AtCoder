#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
const ll mod = 1000000007;

int pow(ll a, ll p) {
  ll calc = 1;
  while (p) {
    if (p & 1) calc = calc * a % mod;
    a = a * a % mod;
    p >>= 1;
  }
  return calc;
}

int main() {
  ll N, P;
  cin >> N >> P;

  ll ans = (P - 1) * pow(P - 2, N - 1) % mod;
  cout << ans << endl;
  return 0;
}