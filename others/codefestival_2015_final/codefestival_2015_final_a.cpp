#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S, T, U;
  cin >> S >> T >> U;

  if (S.length() == 5 && T.length() == 7 && U.length() == 5)
    cout << "valid" << endl;
  else
    cout << "invalid" << endl;
  return 0;
}