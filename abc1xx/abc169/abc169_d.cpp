#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  if (N == 1) {
    cout << 0 << endl;
    return 0;
  }

  int ans = 0;
  ll N_ = N;
  for (ll i = 2; i * i <= N_; i++) {
    int cnt = 0;
    while (N % i == 0) {
      N /= i;
      cnt++;
    }
    int calc = 1;
    while (cnt - calc >= 0) {
      ans++;
      cnt -= calc;
      calc++;
    }
  }

  if (N == N_)
    cout << 1 << endl;
  else if (N != 1)
    cout << ans + 1 << endl;
  else
    cout << ans << endl;
  return 0;
}