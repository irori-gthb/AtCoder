#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  for (ll h = 1; h <= 3500; h++) {
    for (ll n = 1; n <= 3500; n++) {
      ll calc = 4 * h * n - N * n - N * h;
      if (calc > 0 && N * h * n % calc == 0) {
        cout << h << " " << n << " " << N * h * n / calc << endl;
        return 0;
      }
    }
  }
  return 0;
}