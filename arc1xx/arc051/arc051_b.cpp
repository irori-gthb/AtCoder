#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int K;
  cin >> K;

  int a = 1, b = 1;
  rep(i, K - 1) {
    int calc = a;
    a = a + b;
    b = calc;
  }
  cout << b << " " << a << endl;
  return 0;
}