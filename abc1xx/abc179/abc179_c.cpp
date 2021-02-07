#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  ll ans = 0;
  for (int a = 1; a <= N; ++a) {
    ans += (N - 1) / a;
  }
  cout << ans << endl;
  return 0;
}