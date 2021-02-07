#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  vector<int> w(N, 0);
  if (S[0] == 'W') w[0] = 1;
  for (int i = 1; i < N; i++) {
    if (S[i] == 'W')
      w[i] = w[i - 1] + 1;
    else
      w[i] = w[i - 1];
  }

  int ans = N - 1 - (w[N - 1] - w[0]);
  for (int i = 1; i < N; i++) {
    ans = min(ans, w[i - 1] + N - 1 - i - w[N - 1] + w[i]);
  }
  cout << ans << endl;
  return 0;
}