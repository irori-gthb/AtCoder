#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;

  int ans = 0;
  if (A < 0)
    ans += abs(A) * C + D + B * E;
  else
    ans += E * (B - A);
  cout << ans << endl;
  return 0;
}