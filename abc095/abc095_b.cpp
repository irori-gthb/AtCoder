#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, X;
  cin >> N >> X;

  int mn = INT_MAX;
  int m;
  rep(i, N) {
    cin >> m;
    mn = min(mn, m);
    X -= m;
  }
  cout << X / mn + N << endl;
  return 0;
}