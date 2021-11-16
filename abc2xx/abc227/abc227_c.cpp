#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  ll ans = 0;
  for (ll a = 1; a * a * a <= N; a++) {
    for (ll b = a; a * b * b <= N; b++) {
      ans += N / (a * b) - b + 1;
    }
  }
  cout << ans << endl;
  return 0;
}