#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  for (int i = 1; i < 38; i++) {
    for (int j = 1; j < 26; j++) {
      if (N == powl(3, i) + powl(5, j)) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }
  cout << -1 << endl;
  return 0;
}