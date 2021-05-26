#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, A, B, C, D;
  cin >> N >> A >> B >> C >> D;

  cout << min(B * (N / A + min(1, N % A)), D * (N / C + min(1, N % C))) << endl;
  return 0;
}