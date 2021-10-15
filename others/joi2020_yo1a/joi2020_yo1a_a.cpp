#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  if (A * B * C % 4 == 0)
    cout << 2 << endl;
  else
    cout << 1 << endl;
  return 0;
}