#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int M, D;
  cin >> M >> D;

  if (M % D == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}