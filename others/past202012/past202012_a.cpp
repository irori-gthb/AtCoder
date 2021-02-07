#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  string ans = "draw";
  if (S[0] == S[1] && S[1] == S[2]) ans = S[0];
  if (S[1] == S[2] && S[2] == S[3]) ans = S[1];
  if (S[2] == S[3] && S[3] == S[4]) ans = S[2];
  cout << ans << endl;
  return 0;
}