#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  ll K;
  cin >> S >> K;

  if (S == string(S.size(), S[0])) {
    cout << S.size() * K / 2 << endl;
    return 0;
  }

  ll ans1 = 0;
  ll ans2 = 0;
  ll cnt = 1;
  rep(i, S.size() - 1) {
    if (S[i] == S[i + 1])
      cnt++;
    else {
      ans1 += cnt / 2;
      cnt = 1;
    }
  }
  ans1 += cnt / 2;

  cnt = 1;
  rep(i, 2 * S.size() - 1) {
    if (S[i % S.size()] == S[(i + 1) % S.size()])
      cnt++;
    else {
      ans2 += cnt / 2;
      cnt = 1;
    }
  }
  ans2 += cnt / 2;

  cout << ans1 + (K - 1) * (ans2 - ans1) << endl;
  return 0;
}