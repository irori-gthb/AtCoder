#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int f = 2025 - N;
  for (int i = 1; i <= 9; i++) {
    if (f % i == 0 && f / i <= 9) cout << i << " x " << f / i << endl;
  }
  return 0;
}