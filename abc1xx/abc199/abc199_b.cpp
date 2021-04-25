#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ma = 0, mi = 1001, t;
  rep(i, N) {
    cin >> t;
    ma = max(ma, t);
  }
  rep(i, N) {
    cin >> t;
    mi = min(mi, t);
  }

  cout << max(0, mi - ma + 1) << endl;
  return 0;
}