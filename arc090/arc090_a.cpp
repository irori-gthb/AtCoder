#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A1(N);
  vector<int> A2(N);
  rep(i, N) cin >> A1[i];
  rep(i, N) cin >> A2[i];

  int calc = 0;
  int ans = 0;
  rep(i, N) {
    rep(j, i + 1) calc += A1[j];
    for (int j = i; j < N; j++) calc += A2[j];
    ans = max(ans, calc);
    calc = 0;
  }

  cout << ans << endl;
  return 0;
}