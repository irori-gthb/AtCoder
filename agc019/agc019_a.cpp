#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll Q, H, S, D, N;
  cin >> Q >> H >> S >> D >> N;

  ll w1 = min({4 * Q, 2 * H, S});
  ll w2 = min(w1 * 2, D);

  cout << N / 2 * w2 + N % 2 * w1 << endl;
  return 0;
}