#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  if (M % 2 == 1) {
    rep(i, (M - 3) / 4 + 1) {
      if (M - 3 - i * 4 == (N - i - 1) * 2) {
        cout << N - i - 1 << " " << 1 << " " << i << endl;
        return 0;
      }
    }
  } else {
    rep(i, M / 4 + 1) {
      if (M - i * 4 == (N - i) * 2) {
        cout << N - i << " " << 0 << " " << i << endl;
        return 0;
      }
    }
  }

  cout << -1 << " " << -1 << " " << -1 << " " << endl;
  return 0;
}