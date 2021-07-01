#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int L, A, B, C, D;
  cin >> L >> A >> B >> C >> D;

  cout << L - max(A / C + min(1, A % C), B / D + min(1, B % D)) << endl;
  return 0;
}