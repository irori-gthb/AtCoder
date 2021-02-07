#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  int A, B, C, D;
  cin >> S >> A >> B >> C >> D;

  S.insert(D, "\"");
  S.insert(C, "\"");
  S.insert(B, "\"");
  S.insert(A, "\"");
  cout << S << endl;
  return 0;
}