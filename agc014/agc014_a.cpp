#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int ans = 0;
  while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
    int ta = A;
    int tb = B;
    int tc = C;
    A = tb / 2 + tc / 2;
    B = tc / 2 + ta / 2;
    C = ta / 2 + tb / 2;
    ans++;
    if (ta == A && tb == B && tc == C) {
      cout << -1 << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}