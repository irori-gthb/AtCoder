#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> L(2 * N);
  rep(i, 2 * N) cin >> L[i];
  sort(L.begin(), L.end());

  int ans = 0;
  for (int i = 0; i < 2 * N; i = i + 2) {
    ans += min(L[i], L[i + 1]);
  }
  cout << ans << endl;
  return 0;
}