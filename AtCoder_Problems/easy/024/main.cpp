#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main() {
  int A, B, M; cin >> A >> B >> M;
  vector<int> a(A), b(B);
  rep(i, A) cin >> a.at(i);
  rep(i, B) cin >> b.at(i);


  int aMin = *min_element(a.begin(), a.end());
  int bMin = *min_element(b.begin(), b.end());

  int ans = aMin + bMin;
  for (int i = 0; i < M; i++) {
    int x, y, c; cin >> x >> y >> c;
    int withCoupon = a.at(x - 1) + b.at(y - 1) - c;
    ans = min(ans, withCoupon);
  }

  cout << ans << endl;

  return 0;
}