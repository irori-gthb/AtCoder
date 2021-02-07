#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, W;
  cin >> N >> W;

  map<ll, ll> start;
  map<ll, ll> stop;
  ll end = 0;
  ll S, T, P;
  rep(i, N) {
    cin >> S >> T >> P;
    start[S] += P;
    stop[T] += P;
    end = max(end, T);
  }

  ll calc = 0;
  rep(i, end + 1) {
    calc = calc + start[i] - stop[i];
    if (calc > W) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}