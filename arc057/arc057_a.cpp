#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll A, K;
  cin >> A >> K;

  ll ans = 0;
  if (K == 0) {
    ans = 2 * pow(10, 12) - A;
  } else {
    while (A < 2 * pow(10, 12)) {
      A += (1 + K * A);
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}