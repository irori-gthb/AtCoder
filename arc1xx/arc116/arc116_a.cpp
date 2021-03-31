#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int odd = 0, even = 0;
  vector<string> ans;
  rep(i, N) {
    ll c;
    cin >> c;

    if (c % 4 == 0)
      ans.push_back("Even");
    else if (c % 4 == 2)
      ans.push_back("Same");
    else
      ans.push_back("Odd");
  }
  rep(i, N) cout << ans[i] << endl;
}