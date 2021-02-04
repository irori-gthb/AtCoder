#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll K, A, B;
  cin >> K >> A >> B;

  if (B - A < 2) {
    cout << 1 + K << endl;
    return 0;
  } else {
    if (2 + K < A) {
      cout << 1 + K << endl;
      return 0;
    } else {
      cout << A + ((K - A + 1) / 2) * (B - A) + (K - A + 1) % 2 << endl;
      return 0;
    }
  }
  return 0;
}