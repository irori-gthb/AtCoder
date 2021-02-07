#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
ll memo[300][300];

ll cmb(ll n, ll r) {
  if (r == 0 || r == n) return 1;
  if (r == 1) return n;
  if (memo[n][r] != 0) return memo[n][r];
  memo[n][r] = cmb(n - 1, r) + cmb(n - 1, r - 1);
  return memo[n][r];
}

int main() {
  ll L;
  cin >> L;

  cout << cmb(L - 1, 11) << endl;
  return 0;
}