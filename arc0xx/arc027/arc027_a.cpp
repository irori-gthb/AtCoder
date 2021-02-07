#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int h, m;
  cin >> h >> m;

  cout << (17 - h) * 60 + 60 - m << endl;
  return 0;
}