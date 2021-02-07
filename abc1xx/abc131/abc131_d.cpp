#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> task;
  int A, B;
  rep(i, N) {
    cin >> A >> B;
    task.emplace_back(B, A);
  }
  sort(task.begin(), task.end());

  int calc = 0;
  for (auto x : task) {
    calc += x.second;
    if (calc > x.first) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}