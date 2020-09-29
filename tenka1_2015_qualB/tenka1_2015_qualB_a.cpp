#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  vector<int> a(20);
  a[0] = 100;
  a[1] = 100;
  a[2] = 200;

  for (int i = 3; i < 20; i++) {
    a[i] = a[i - 1] + a[i - 2] + a[i - 3];
  }
  cout << a[19] << endl;
  return 0;
}