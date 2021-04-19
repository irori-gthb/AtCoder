#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  for (int i = B - A; i > 0; i--) {
    if ((A - 1) / i + 2 <= B / i) {
      cout << i << endl;
      return 0;
    }

    if (i == 1) {
      cout << 1 << endl;
      return 0;
    }
  }
  return 0;
}