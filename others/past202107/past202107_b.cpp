#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  double A, B, C;
  cin >> A >> B >> C;

  cout << fixed << setprecision(10) << min(C, A / B) << endl;
  return 0;
}