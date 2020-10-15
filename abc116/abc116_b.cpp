#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int s;
  cin >> s;

  int cnt = 1;
  while (s != 1 && s != 2 && s != 4) {
    cnt++;
    if (s % 2 == 0)
      s /= 2;
    else
      s = 3 * s + 1;
  }
  cout << cnt + 3 << endl;
  return 0;
}