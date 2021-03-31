#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  vector<int> N(6);
  rep(i, 6) cin >> N[i];

  sort(N.rbegin(), N.rend());

  cout << N[2] << endl;
  return 0;
}