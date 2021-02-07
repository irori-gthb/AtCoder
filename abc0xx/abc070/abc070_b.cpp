#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  int s = max(A, C);
  int e = min(B, D);
  cout << max(0, e - s) << endl;
  return 0;
}