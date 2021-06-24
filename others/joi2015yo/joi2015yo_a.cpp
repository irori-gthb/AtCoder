#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C, D, P;
  cin >> A >> B >> C >> D >> P;
  if (P <= C)
    cout << min(A * P, B) << endl;
  else
    cout << min(A * P, B + (P - C) * D) << endl;
  return 0;
}