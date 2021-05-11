#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll t, N;
  cin >> t >> N;
  ll x = (N * 100 - 1) / t;
  cout << x + t * x / 100 + 1 << endl;
  return 0;
}