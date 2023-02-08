#include <bits/stdc++.h>
using namespace std;

bool check(char c) {
  int n = c - '0';
  return n >= 0 && n <= 9;
}

bool parse(string S, int offset, int len) {
  for (int i = 0; i < len; i++) {
    if (!check(S.at(i + offset)))
      return false;
  }
  return true;
}

string solve(string S, int A, int B) {
  string yes = "Yes", no = "No";
  if (!parse(S, 0, A))
    return no;
  if (S.at(A) != '-')
    return no;
  if (!parse(S, A + 1, B))
    return no;
  return yes;
}

int main() {
  int A, B;
  string S;
  cin >> A >> B >> S;

  cout << solve(S, A, B) << endl;

  return 0;
}