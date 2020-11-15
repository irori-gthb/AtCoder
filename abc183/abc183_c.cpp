#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;

  vector<vector<int>> T(N, vector<int>(N));
  rep(i, N) rep(j, N) cin >> T[i][j];

  vector<int> temp(N - 1);
  rep(i, N - 1) temp[i] = i + 2;

  int ans = 0;
  do {
    ll calc = 0;
    calc += T[0][temp[0] - 1];
    for (int i = 1; i < N - 1; i++) calc += T[temp[i - 1] - 1][temp[i] - 1];
    calc += T[temp[N - 2] - 1][0];
    if (calc == K) ans++;
  } while (next_permutation(temp.begin(), temp.end()));

  cout << ans << endl;
  return 0;
}