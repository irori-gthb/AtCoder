#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int p1, p2, p3, d1, d2;
  cin >> p1 >> p2 >> p3 >> d1 >> d2;

  cout << min({p1, p2, p3}) + min({d1, d2}) - 50 << endl;
  return 0;
}