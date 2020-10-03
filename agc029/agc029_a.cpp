#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  ll calc = 0;
  ll cnt = 0;
  rep(i, S.size()) {
    if (S[i] == 'B') {
      cnt++;
      calc += i + 1;
    }
  }

  cout << cnt * (2 * S.size() - cnt + 1) / 2 - calc << endl;
  return 0;
}
