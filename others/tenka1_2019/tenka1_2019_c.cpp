#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  vector<int> cnt(N + 1, 0);
  for (int i = 1; i < N + 1; i++) cnt[i] = (S[i - 1] == '#') + cnt[i - 1];

  int ans = N;
  for (int i = 0; i < N + 1; i++)
    ans = min(ans, cnt[i] + (N - i) - (cnt[N] - cnt[i]));

  cout << ans << endl;
  return 0;
}