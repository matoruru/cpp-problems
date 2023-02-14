#include <bits/stdc++.h>
using namespace std;

string judge(string A, string B) {
  int Alen = A.size(), Blen = B.size();
  const string GREATER = "GREATER";
  const string LESS = "LESS";
  const string EQUAL = "EQUAL";
  if (Alen > Blen)
    return GREATER;
  else if (Alen < Blen)
    return LESS;

  for (int i = 0; i < Alen; i++) {
    char Ai = A.at(i), Bi = B.at(i);
    if (Ai > Bi)
      return GREATER;
    else if (Ai < Bi)
      return LESS;
  }

  return EQUAL;
}

int main() {
  string A, B;
  cin >> A >> B;

  cout << judge(A, B) << endl;

  return 0;
}