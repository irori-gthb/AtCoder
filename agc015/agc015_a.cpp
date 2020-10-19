#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, A, B;
  cin >> N >> A >> B;

  if (B < A) {
    cout << 0 << endl;
    return 0;
  }

  if (N == 1) {
    if (A == B) {
      cout << 1 << endl;
      return 0;
    }
  } else if (N == 2) {
    cout << 1 << endl;
    return 0;
  } else {
    cout << (N - 2) * (B - A) + 1 << endl;
    return 0;
  }
  cout << 0 << endl;
  return 0;
}