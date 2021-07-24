#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  double A, B;
  cin >> A >> B;

  cout << fixed << setprecision(6) << (A - B) / 3 + B << endl;
  return 0;
}