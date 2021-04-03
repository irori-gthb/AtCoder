#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int sum_min = INT_MAX;
  int ansx = 0, ansy = 0;
  rep(i, N) {
    rep(j, N) {
      string tmp = S;
      rep(k, i) for (int l = 1; l < N; l++) if (tmp[l] == '#') tmp[l - 1] = '#';
      rep(k, j) for (int l = N - 1; 0 < l; l--) if (tmp[l - 1] == '#') tmp[l] =
          '#';

      bool ok = true;
      for (auto c : tmp)
        if (c != '#') ok = false;
      if (ok && sum_min > i + j) sum_min = i + j, ansx = i, ansy = j;
    }
  }
  cout << ansx << " " << ansy << endl;
  return 0;
}