#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K, S;
  cin >> N >> K >> S;

  rep(i, N) {
    if (i < K)
      cout << S;
    else {
      if (S != 1000000000)
        cout << S + 1;
      else
        cout << 1;
    }

    if (i != N - 1) cout << " ";
  }
  return 0;
}