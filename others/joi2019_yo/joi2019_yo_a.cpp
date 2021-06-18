#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int calc = 0;
  rep(i, C) {
    if ((i + 1) % 7)
      calc += A;
    else
      calc += A + B;
    if (calc >= C) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}