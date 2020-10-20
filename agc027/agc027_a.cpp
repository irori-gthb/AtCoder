#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, x;
  cin >> N >> x;

  ll sum = 0;
  vector<int> A(N);
  rep(i, N) {
    cin >> A[i];
    sum += A[i];
  }

  if (x == sum) {
    cout << N << endl;
    return 0;
  } else if (sum < x) {
    cout << N - 1 << endl;
    return 0;
  }

  int calc = 0;
  int ans = 0;
  sort(A.begin(), A.end());
  while (calc + A[ans] <= x) {
    calc += A[ans];
    ans++;
  }
  cout << ans << endl;
  return 0;
}