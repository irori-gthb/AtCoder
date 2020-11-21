#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll S, P;
  cin >> S >> P;

  for (int i = 1; i <= pow(10, 6); i++) {
    if (P % i == 0 && i + P / i == S) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}