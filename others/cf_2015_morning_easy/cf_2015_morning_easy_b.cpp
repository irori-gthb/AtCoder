#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  if (N % 2 != 0) {
    cout << -1 << endl;
  } else {
    int ans = 0;
    rep(i, N / 2) if (S[i] != S[i + N / 2]) ans++;
    cout << ans << endl;
  }
  return 0;
}