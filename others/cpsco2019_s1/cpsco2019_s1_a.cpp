#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, A;
  cin >> N >> A;

  cout << A / 3 + min(1, A % 3) << " " << min(N / 3, A) << endl;
  return 0;
}