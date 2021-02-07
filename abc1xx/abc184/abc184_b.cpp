#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, X;
  string S;
  cin >> N >> X >> S;

  rep(i, S.size()) {
    if (S[i] == 'o')
      X++;
    else
      X = max(0, X - 1);
  }
  cout << X << endl;
  return 0;
}