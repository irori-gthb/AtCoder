#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int leap(int n) { return n / 4 - n / 100 + n / 400; }

int main() {
  int A, B;
  cin >> A >> B;

  cout << leap(B) - leap(A - 1) << endl;
  return 0;
}