#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> x(N), y(N);
  rep(i, N) cin >> x[i] >> y[i];

  map<int, set<int>> mpx, mpy;
  rep(i, N) mpx[x[i]].insert(y[i]), mpy[y[i]].insert(x[i]);

  int ans = 0;
  rep(i, N) {
    for (int j = i + 1; j < N; j++) {
      if (x[i] != x[j] && y[i] != y[j]) continue;
      if (x[i] == x[j]) {
        for (int k : mpy[y[i]])
          for (int m : mpy[y[j]])
            if (x[i] != k && k == m) ans++;
      } else if (y[i] == y[j]) {
        for (int k : mpx[x[i]])
          for (int m : mpx[x[j]])
            if (y[i] != k && k == m) ans++;
      }
    }
  }
  cout << ans / 4 << endl;
  return 0;
}