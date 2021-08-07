#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  rep(i, 30) {
    ll calc = 1;
    rep(j, 30) {
      calc *= 3;
      if (i == j) calc++;
    }
    if (N == calc) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}