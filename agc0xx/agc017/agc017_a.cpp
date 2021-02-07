#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, P;
  cin >> N >> P;

  int calc = 0;
  rep(i, N) {
    int A;
    cin >> A;
    calc += A % 2;
  }

  if (calc == 0) {
    if (P == 0)
      cout << ((ll)1 << N) << endl;
    else
      cout << 0 << endl;
  } else {
    cout << ((ll)1 << (N - 1)) << endl;
  }
  return 0;
}