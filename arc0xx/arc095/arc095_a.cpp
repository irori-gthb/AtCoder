#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> X(N), mem(N);
  rep(i, N) cin >> X[i];
  rep(i, N) mem[i] = X[i];

  sort(X.begin(), X.end());
  int ans1 = X.at(N / 2);
  int ans2 = X.at(N / 2 - 1);

  rep(i, N) {
    if (mem.at(i) < ans1) {
      cout << ans1 << endl;
    } else {
      cout << ans2 << endl;
    }
  }
  return 0;
}