#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int Q;
  cin >> Q;

  priority_queue<ll> pq;
  ll calc = 0;

  rep(i, Q) {
    int type;
    cin >> type;
    if (type == 1) {
      long long x;
      cin >> x;
      pq.push(-x + calc);
    } else if (type == 2) {
      long long x;
      cin >> x;
      calc += x;
    } else if (type == 3) {
      cout << -pq.top() + calc << endl;
      pq.pop();
    }
  }
  return 0;
}