#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int K;
  cin >> K;

  ll ans = 0;
  for (int A = 1; A <= K; A++)
    for (int B = 1; A * B <= K; B++) ans += K / A / B;
  cout << ans << endl;
  return 0;
}