#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int l1, l2, l3;
  cin >> l1 >> l2 >> l3;

  if (l1 == l2)
    cout << l3 << endl;
  else if (l1 == l3)
    cout << l2 << endl;
  else if (l2 == l3)
    cout << l1 << endl;
  return 0;
}