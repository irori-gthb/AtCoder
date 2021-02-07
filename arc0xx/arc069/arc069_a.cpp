#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;

  cout << min(N, M / 2) + max((ll)0, (M - 2 * N) / 4) << endl;
  return 0;
}