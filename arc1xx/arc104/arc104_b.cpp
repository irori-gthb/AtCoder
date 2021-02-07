#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int ans = 0;
  rep(i, N) {
    int c1 = 0, c2 = 0;
    for (int j = i; j < N; j++) {
      if (S[j] == 'A')
        c1++;
      else if (S[j] == 'T')
        c1--;
      else if (S[j] == 'G')
        c2++;
      else if (S[j] == 'C')
        c2--;
      if (c1 == 0 && c2 == 0) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}