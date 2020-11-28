#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;

  ll calc = sqrt(2 * n + 2);
  while (calc * (calc + 1) / 2 <= n + 1) calc++;
  cout << n - calc + 2 << endl;
  return 0;
}