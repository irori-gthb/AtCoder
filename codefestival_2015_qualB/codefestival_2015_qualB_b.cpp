#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  map<int, int> mp;
  int A;
  rep(i, N) {
    cin >> A;
    mp[A]++;
  }

  for (auto x : mp) {
    if (x.second > N / 2) {
      cout << x.first << endl;
      return 0;
    }
  }
  cout << '?' << endl;
  return 0;
}