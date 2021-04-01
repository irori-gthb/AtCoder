#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;
  string mem = S;

  sort(S.begin(), S.end());
  do {
    if (S != mem && S != string(mem.rbegin(), mem.rend())) {
      cout << S.c_str() << endl;
      return 0;
    }
  } while (next_permutation(S.begin(), S.end()));

  cout << "None" << endl;
  return 0;
}