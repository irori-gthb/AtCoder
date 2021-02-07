#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
const ll mod = 1000000007;

int main() {
  ll A, B, C;
  cin >> A >> B >> C;

  ll ans = A * B % mod;
  cout << ans * C % mod << endl;
  return 0;
}