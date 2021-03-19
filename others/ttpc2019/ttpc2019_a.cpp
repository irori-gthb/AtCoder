#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, T;
  cin >> A >> B >> T;

  int calc = B - A;
  cout << B + ((T - B) / calc + min(1, (T - B) % calc)) * calc << endl;
  return 0;
}