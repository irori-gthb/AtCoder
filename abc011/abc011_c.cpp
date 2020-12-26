#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, NG1, NG2, NG3;
  cin >> N >> NG1 >> NG2 >> NG3;

  if (N == NG1 || N == NG2 || N == NG3) {
    cout << "NO" << endl;
    return 0;
  }

  int cnt = 0;
  while (N > 0) {
    if (N - 3 != NG1 && N - 3 != NG2 && N - 3 != NG3)
      N -= 3;
    else if (N - 2 != NG1 && N - 2 != NG2 && N - 2 != NG3)
      N -= 2;
    else if (N - 1 != NG1 && N - 1 != NG2 && N - 1 != NG3)
      N -= 1;
    else {
      cout << "NO" << endl;
      return 0;
    }
    cnt++;
  }
  if (cnt > 100)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
  return 0;
}