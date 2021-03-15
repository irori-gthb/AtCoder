#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, W;
  cin >> A >> B >> W;

  int mi = INT_MAX, ma = INT_MIN;
  for (int i = 1; i <= 1000000; i++) {
    if (A * i <= 1000 * W && 1000 * W <= B * i) {
      mi = min(mi, i);
      ma = max(ma, i);
    }
  }
  if (ma == INT_MIN)
    cout << "UNSATISFIABLE";
  else
    cout << mi << ' ' << ma;
  return 0;
}