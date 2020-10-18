#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int cnt = 0;
  int sum = 0;
  for (int i = 1; i <= N; i++) {
    int t = i;
    while (t > 0) {
      cnt = cnt + t % 10;
      t = t / 10;
    }
    if (A <= cnt && cnt <= B) {
      sum += i;
    }
    cnt = 0;
  }
  cout << sum << endl;
  return 0;
}