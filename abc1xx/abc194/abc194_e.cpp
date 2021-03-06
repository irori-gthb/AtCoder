#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<set<int>> mem(1500001);
  rep(i, N) {
    int A;
    cin >> A;
    mem[A].insert(i);
  }

  rep(i, 1500001) {
    int calc = -1;
    for (int x : mem[i]) {
      if (x - calc > M) {
        cout << i << endl;
        return 0;
      }
      calc = x;
    }
    if (N - calc - 1 >= M) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}