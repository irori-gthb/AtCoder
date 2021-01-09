#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, W;
  cin >> N >> W;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  rep(i, N) {
    rep(j, W) {
      int cnt = 0;
      if (S[i][j] == '#') cnt++;
      if (i > 0 && j > 0 && S[i - 1][j - 1] == '#') cnt++;
      if (i > 0 && S[i - 1][j] == '#') cnt++;
      if (i > 0 && j < W - 1 && S[i - 1][j + 1] == '#') cnt++;
      if (j > 0 && S[i][j - 1] == '#') cnt++;
      if (j < W - 1 && S[i][j + 1] == '#') cnt++;
      if (i < N - 1 && j > 0 && S[i + 1][j - 1] == '#') cnt++;
      if (i < N - 1 && S[i + 1][j] == '#') cnt++;
      if (i < N - 1 && j < W - 1 && S[i + 1][j + 1] == '#') cnt++;
      cout << cnt;
    }
    cout << endl;
  }
  return 0;
}