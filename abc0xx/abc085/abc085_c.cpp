#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, Y;
  cin >> N >> Y;

  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N - i; j++) {
      if (Y == 10000 * i + 5000 * j + 1000 * (N - i - j)) {
        cout << i << " " << j << " " << N - i - j << endl;
        return 0;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
}