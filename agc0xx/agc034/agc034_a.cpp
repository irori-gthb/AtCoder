#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, A, B, C, D;
  string S;
  cin >> N >> A >> B >> C >> D >> S;

  for (int i = A; i < C; i++) {
    if (S[i - 1] == '#' && S[i] == '#') {
      cout << "No" << endl;
      return 0;
    }
  }

  for (int i = B; i < D; i++) {
    if (S[i - 1] == '#' && S[i] == '#') {
      cout << "No" << endl;
      return 0;
    }
  }

  if (D < C) {
    for (int i = B - 1; i < D; i++) {
      if (S[i - 1] == '.' && S[i] == '.' && S[i + 1] == '.') {
        cout << "Yes" << endl;
        return 0;
      }
    }
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}