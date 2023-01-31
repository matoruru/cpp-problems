#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)
const int inf = 1000000000; // 10^9

// x ^ y
int pow(int x, int y) {
  int ans = 1;
  for (int i = 0; i < y; ++i) {
    ans *= x;
  }
  return ans;
}

int cost(int N, vector<int> X, int P) {
  int SUM = 0;
  for (int i = 0; i < N; ++i) {
    SUM += pow(X.at(i) - P, 2);
  }
  return SUM;
}

int main() {
  int N;
  cin >> N;
  vector<int> X(N);
  rep(i, N) cin >> X.at(i);
  int SUM_X = std::accumulate(X.begin(), X.end(), 0);
  int P = std::round(SUM_X / N); // P is the average of Xs.
  int P_cost = cost(N, X, P);
  int PL_cost = cost(N, X, P - 1);
  int PR_cost = cost(N, X, P + 1);
  int min = inf;
  if (P_cost < min) min = P_cost;
  if (PL_cost < min) min = PL_cost;
  if (PR_cost < min) min = PR_cost;

  cout << min << endl;
  return 0;
}