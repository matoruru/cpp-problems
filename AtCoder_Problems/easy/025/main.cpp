#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int getDictionaryOrder(vector<int> sorted, vector<int> &v, int N) {
  int count = 0;
  do {
    int isSame = true;
    count++;
    for (int i = 0; i < N; i++) {
      if (sorted.at(i) != v.at(i)) {
        isSame = false;
        break;
      }
    }
    if (isSame) return count;
  } while (next_permutation(sorted.begin(), sorted.end()));
}

int main() {
  int N; cin >> N;
  vector<int> P(N), Q(N), sorted(N);
  rep(i, N) cin >> P.at(i);
  rep(i, N) cin >> Q.at(i);
  rep(i, N) sorted.at(i) = i + 1;

  cout << abs(getDictionaryOrder(sorted, P, N) - getDictionaryOrder(sorted, Q, N)) << endl;

  return 0;
}