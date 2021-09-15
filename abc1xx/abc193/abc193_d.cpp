#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int score(string str) {
  vector<int> m(10);
  for (char c : str) m[c - '0']++;

  int res = 0;
  for (int i = 1; i <= 9; i++) {
    int calc = 1;
    rep(j, m[i]) calc *= 10;
    res += calc * i;
  }
  return res;
}

int main() {
  int K;
  string S, T;
  cin >> K >> S >> T;

  vector<int> card(10, K);
  card[0] = 0;
  rep(i, 4) card[S[i] - '0']--;
  rep(i, 4) card[T[i] - '0']--;

  ll cnt = 0;
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      S[4] = '0' + i;
      T[4] = '0' + j;
      if (score(S) > score(T)) {
        if (i == j)
          cnt += (ll)card[i] * (card[i] - 1);
        else
          cnt += (ll)card[i] * card[j];
      }
    }
  }

  ll C = 0;
  rep(i, 10) C += card[i];
  ll total = C * (C - 1);

  cout << setprecision(10) << (double)cnt / total << endl;
  return 0;
}