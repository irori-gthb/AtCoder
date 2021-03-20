#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  int l = to_string(N).length();
  ll f = 0, e = 0;
  if (l % 2 == 0) {
    ll calc = 1;
    rep(i, l / 2) calc *= 10;
    f = N / calc;
    e = N % calc;
  } else {
    string mem = "";
    rep(i, l / 2) mem += '9';
    f = atoi(mem.c_str());
    e = atoi(mem.c_str());
  }

  if (f > e)
    cout << f - 1 << endl;
  else
    cout << f << endl;
  return 0;
}