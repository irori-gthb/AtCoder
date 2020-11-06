#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string O, E;
  cin >> O >> E;

  rep(i, E.size()) cout << O[i] << E[i];
  if (O.size() - E.size() == 1) cout << O[O.size() - 1];
  return 0;
}