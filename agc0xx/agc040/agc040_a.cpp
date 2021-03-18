#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  ll n = S.length();
  ll a[n + 1] = {0};

  rep(i, n) if (S[i] == '<') a[i + 1] = a[i] + 1;

  for (long long i = n; i >= 0; --i) {
    if (S[i] == '>') a[i] = max(a[i + 1] + 1, a[i]);
  }

  ll ans = 0;
  rep(i, n + 1) ans += a[i];
  cout << ans << endl;
  return 0;
}