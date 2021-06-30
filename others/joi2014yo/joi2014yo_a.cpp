#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int s = 0, calc = 0;
  rep(i, 5) cin >> s, calc += max(s, 40);

  cout << calc / 5 << endl;
  return 0;
}