#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll A;
  string B;
  cin >> A >> B;

  ll B_ = stoi(B.erase(B.find("."), 1));

  cout << A * B_ / 100 << endl;
  return 0;
}