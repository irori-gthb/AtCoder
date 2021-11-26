#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> b(N);
  rep(i, N) b[i] = i + 1;

  int X, Y;
  rep(i, M) {
    cin >> X >> Y;
    b[X - 1] = Y;
  }

  rep(i, N) cout << b[i] << endl;
  return 0;
}