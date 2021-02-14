#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll B, C;
  cin >> B >> C;

  ll ans = 1;
  if (B > 0) {
    ans += (C - 1) / 2;
    ans += min(B, (C + 1) / 2);
    ans += min(B, C / 2);
    ans += max((ll)0, (C - 2) / 2);
  } else if (B == 0) {
    ans += C / 2;
    ans += (C - 1) / 2;
  } else {
    ans += C / 2;
    ans += min(abs(B) - 1, (C - 2) / 2);
    ans += min(abs(B) + 1, (C + 1) / 2);
    ans += (C - 1) / 2;
  }

  cout << ans << endl;
  return 0;
}