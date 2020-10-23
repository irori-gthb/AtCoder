#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll A, B, K, L;
  cin >> A >> B >> K >> L;

  cout << min({K * A, (K / L) * B + (K % L) * A,
               (K / L + min((ll)1, K % L)) * B})
       << endl;
  return 0;
}