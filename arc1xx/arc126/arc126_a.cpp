#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int T;
  cin >> T;

  vector<ll> ans(T);

  rep(i, T) {
    ll N2, N3, N4;
    cin >> N2 >> N3 >> N4;

    if (N3 > 0 && N4 > 0) {
      ll calc = min(N3 / 2, N4);
      ans[i] += calc;
      N3 -= 2 * calc;
      N4 -= calc;
    }
    if (N3 > 0 && N2 > 0) {
      ll calc = min(N3 / 2, N2 / 2);
      ans[i] += calc;
      N2 -= 2 * calc;
      N3 -= 2 * calc;
    }
    if (N4 > 0 && N2 > 0) {
      ll calc = min(N4 / 2, N2);
      ans[i] += calc;
      N4 -= 2 * calc;
      N2 -= calc;
    }
    if (N4 > 0 && N2 > 0) {
      ll calc = min(N4, N2 / 3);
      ans[i] += calc;
      N4 -= calc;
      N2 -= 3 * calc;
    }
    if (N2 > 0) {
      ans[i] += N2 / 5;
    }
  }

  rep(i, T) cout << ans[i] << endl;
  return 0;
}