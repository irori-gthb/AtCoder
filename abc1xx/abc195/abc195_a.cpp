#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int M, H;
  cin >> M >> H;

  if (H % M == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}