#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int X;
  cin >> X;

  cout << max({X / 1000, X % 1000 / 100, X % 100 / 10, X % 10}) << endl;
  return 0;
}