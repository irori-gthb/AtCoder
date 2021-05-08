#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N, 0);
  int t;
  rep(i, N) {
    cin >> t;
    A[t - 1]++;
  }

  rep(i, N) if (A[i] == 2) cout << i + 1 << " ";
  rep(i, N) if (A[i] == 0) {
    cout << i + 1 << endl;
    return 0;
  }
  cout << "Correct" << endl;
  return 0;
}