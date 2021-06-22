#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  int a, b, sa = 0, sb = 0;
  rep(i, n) {
    cin >> a >> b;
    if (a > b)
      sa += a + b;
    else if (a < b)
      sb += a + b;
    else {
      sa += a;
      sb += b;
    }
  }

  cout << sa << " " << sb << endl;
  return 0;
}