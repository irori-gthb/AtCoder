#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  const int L = 100001;
  vector<bool> x(100001);
  rep(i, N) {
    int a;
    cin >> a;
    x[a] = true;
  }

  vector<int> d;
  for (int i = 2; i < L; i++) {
    bool flag = false;
    for (int j = i; j < L; j += i) {
      if (x[j]) flag = true;
    }
    if (flag) d.push_back(i);
  }

  vector<bool> ok(M + 1, true);
  for (int i : d)
    for (int j = i; j <= M; j += i) ok[j] = false;

  int cnt = 0;
  for (int i = 1; i <= M; ++i)
    if (ok[i]) cnt++;

  cout << cnt << endl;
  for (int i = 1; i <= M; ++i)
    if (ok[i]) cout << i << endl;
  return 0;
}