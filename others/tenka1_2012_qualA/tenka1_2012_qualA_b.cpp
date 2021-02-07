#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  getline(cin, S);

  int cnt = 0;
  rep(i, S.size()) {
    if (S[i] == ' ') {
      if (cnt == 0) cout << ',';
      cnt++;
    } else {
      cout << S[i];
      cnt = 0;
    }
  }
  cout << endl;
  return 0;
}