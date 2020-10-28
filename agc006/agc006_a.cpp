#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S, T;
  cin >> N >> S >> T;

  int calc = 0;
  rep(i, N) if (S.substr(N - i - 1) == T.substr(0, i + 1)) calc = i + 1;

  cout << 2 * N - calc << endl;
  return 0;
}