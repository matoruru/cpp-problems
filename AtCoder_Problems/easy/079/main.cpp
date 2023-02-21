#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll N, A, B;
  cin >> N >> A >> B;

  ll diff = B - A;
  if (diff % 2 == 0) {
    cout << diff / 2 << endl;
  } else {
    cout << min(A - 1,  N - B) + 1 + ((B - A - 1) / 2) << endl;
  }
  
  return 0;
}
