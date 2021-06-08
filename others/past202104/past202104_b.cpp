#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  rep(i, S.size()) {
    if (S[i] == 'o') {
      cout << (i - 1) / 4 + 1 << endl;
      return 0;
    }
  }
  cout << "none" << endl;
  return 0;
}