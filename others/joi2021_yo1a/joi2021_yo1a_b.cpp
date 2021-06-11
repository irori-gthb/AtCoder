#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;
  for (char c : "JOI") rep(i, N) if (c == S[i]) cout << S[i];
  cout << endl;
  return 0;
}