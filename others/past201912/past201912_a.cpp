#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  vector<char> S(3);
  rep(i, 3) cin >> S[i];

  rep(i, 3) {
    if (S[i] < '0' || '9' < S[i]) {
      cout << "error" << endl;
      return 0;
    }
  }
  int ans = (S[0] - '0') * 100 + (S[1] - '0') * 10 + (S[2] - '0');
  cout << 2 * ans << endl;
  return 0;
}