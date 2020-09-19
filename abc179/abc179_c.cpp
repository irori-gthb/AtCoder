#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  ll ans = 0;
  for (int i = 1; i < N; i++) {
    for (int j = 1; j * j <= N - i; j++) {
      if ((N - i) % j == 0) ans += 2;
      if (j * j == (N - i)) ans--;
    }
  }
  cout << ans << endl;
}