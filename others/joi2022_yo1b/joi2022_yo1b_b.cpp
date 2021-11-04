#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  A += B;
  A %= 12;
  if (A == 0) A = 12;
  cout << A << endl;
  return 0;
}