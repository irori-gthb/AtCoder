#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  int K[N - 1];
  rep(i, N - 1) cin >> K[i];

  cout << K[0];
  rep(i, N - 2) cout << ' ' << min(K[i], K[i + 1]);
  cout << ' ' << K[N - 2] << endl;
  return 0;
}