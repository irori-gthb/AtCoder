#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  ll L, R;
  cin >> S >> L >> R;

  if (S.size() > 11) {
    cout << "No" << endl;
    return 0;
  }
  if (S.size() != 1 && S[0] == '0') {
    cout << "No" << endl;
    return 0;
  }

  ll x = stoll(S);
  if (L <= x && x <= R)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}