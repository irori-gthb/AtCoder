#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  string bk = S;

  for (char c = 'a'; c <= 'z'; c++) {
    if (count(S.begin(), S.end(), c) == 0) {
      cout << S << c << endl;
      return 0;
    }
  }

  if (!next_permutation(S.begin(), S.end())) {
    cout << -1 << endl;
    return 0;
  }

  for (int i = 0; i < S.size(); i++) {
    cout << S.at(i);
    if (S[i] != bk[i]) {
      cout << endl;
      return 0;
    }
  }
  return 0;
}