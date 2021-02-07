#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  int A;
  map<int, int> mp;
  rep(i, N) {
    cin >> A;
    mp[A]++;
  }

  vector<int> v(mp.size());
  int cnt = 0;
  for (auto x : mp) {
    v[cnt] = x.second;
    cnt++;
  }
  sort(v.rbegin(), v.rend());

  if (v.size() <= K) {
    cout << 0 << endl;
    return 0;
  }

  int calc = 0;
  rep(i, K) calc += v[i];

  cout << N - calc << endl;
  return 0;
}