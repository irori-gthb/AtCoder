#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, A, B;
  cin >> N >> A >> B;

  if ((B - A) % 2 == 0) {
    cout << (B - A) / 2 << endl;
  } else {
    cout << min(A - 1, N - B) + 1 + (B - A - 1) / 2 << endl;
  }
  return 0;
}