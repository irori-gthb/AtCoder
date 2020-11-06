#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll A, B, C;
  cin >> A >> B >> C;

  ll mod = 998244353;
  A = A * (A + 1) / 2;
  B = B * (B + 1) / 2;
  C = C * (C + 1) / 2;
  A %= mod;
  B %= mod;
  C %= mod;
  cout << (A * B % mod) * C % mod << endl;
  return 0;
}