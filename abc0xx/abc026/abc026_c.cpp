#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

vector<vector<int>> v(20);

int calc_salary(int num) {
  int max_s = 0, min_s = INT_MAX;
  if (v[num].size() == 0) return 1;
  rep(i, v[num].size()) {
    int s = calc_salary(v[num][i]);
    max_s = max(max_s, s);
    min_s = min(min_s, s);
  }
  return max_s + min_s + 1;
}

int main() {
  int N;
  cin >> N;
  for (int i = 1; i < N; i++) {
    int b;
    cin >> b;
    b--;
    v[b].push_back(i);
  }
  cout << calc_salary(0) << endl;
  return 0;
}