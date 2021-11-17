#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll A, R, N;
  cin >> A >> R >> N;

  rep(i, N - 1) {
    A *= R;
    if (A > 1000000000) {
      cout << "large" << endl;
      return 0;
    }
  }

  cout << A << endl;
  return 0;
}