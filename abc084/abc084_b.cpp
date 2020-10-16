#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B;
  string S;
  cin >> A >> B >> S;

  rep(i, A) {
    if (!('0' <= S[i] && S[i] <= '9')) {
      cout << "No" << endl;
      return 0;
    }
  }
  if (S[A] != '-') {
    cout << "No" << endl;
    return 0;
  }
  for (int i = A + 1; i < S.size(); i++) {
    if (!('0' <= S[i] && S[i] <= '9')) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}