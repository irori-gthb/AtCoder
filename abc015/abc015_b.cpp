#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int A;
  int sum = 0;
  int cnt = 0;
  rep(i, N) {
    cin >> A;
    sum += A;
    if (A) cnt++;
  }

  cout << sum / cnt + min(1, sum % cnt) << endl;
  return 0;
}