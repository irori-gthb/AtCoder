#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int S, A, B;
  cin >> S >> A >> B;

  cout << 250 + max(0, 100 * ((S - A + B - 1) / B)) << endl;
  return 0;
}