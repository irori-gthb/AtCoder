#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  rep(i, N - 2) {
    if ((S[i] == 'a' && S[i + 1] == 'x' && S[i + 2] == S[i]) ||
        (S[i] == 'i' && S[i + 1] == 'x' && S[i + 2] == S[i]) ||
        (S[i] == 'u' && S[i + 1] == 'x' && S[i + 2] == S[i]) ||
        (S[i] == 'e' && S[i + 1] == 'x' && S[i + 2] == S[i]) ||
        (S[i] == 'o' && S[i + 1] == 'x' && S[i + 2] == S[i])) {
      S[i] = '.', S[i + 1] = '.', S[i + 2] = '.';
      i += 2;
    }
  }
  cout << S << endl;
  return 0;
}