#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  if (((n - 1) / 20) % 2 == 0)
    cout << n - ((n - 1) / 20) * 20 << endl;
  else
    cout << ((n - 1) / 20 + 1) * 20 + 1 - n << endl;
  return 0;
}