#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string C1, C2;
  int A, B;
  cin >> C1 >> A >> C2 >> B;

  if (C1 == "W") A *= -1;
  if (C2 == "W") B *= -1;

  cout << abs(A - B) / 15 << endl;
  return 0;
}