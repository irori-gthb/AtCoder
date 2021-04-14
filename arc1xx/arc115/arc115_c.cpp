#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N + 1, 1);
  A[1] = 1;
  for (int i = 2; i <= N; i++) {
    if (A[i] == 1) {
      int calc = i;
      while (calc <= N) {
        for (int i = 1; i <= N / calc; i++) A[i * calc]++;
        calc *= i;
      }
    }
  }
  rep(i, N) cout << A[i + 1] << " ";
  cout << endl;
  return 0;
}