#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, A, B;
  string S;
  cin >> N >> A >> B >> S;

  int dom = 0;
  int ovs = 0;
  rep(i, S.size()) {
    if (S[i] == 'a') {
      if (dom + ovs < A + B) {
        cout << "Yes" << endl;
        dom++;
      } else
        cout << "No" << endl;
    } else if (S[i] == 'b') {
      if (dom + ovs < A + B && ovs < B) {
        cout << "Yes" << endl;
        ovs++;
      } else
        cout << "No" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}