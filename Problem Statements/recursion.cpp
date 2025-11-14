#include <bits/stdc++.h>
using namespace std;

int sum = 0;
void sumofN(int N)
{
  if (N == 0)
    return;
  sum += N;
  N--;
  sumofN(N);
}

int factorialN = 1;
void Nfactorial(int N)
{
  if (N == 1)
    return;
  factorialN *= N;
  N--;
  Nfactorial(N);
}

void arrayReverse(vector<int> &V, int a, int b)
{
  if (a > b)
    return;
  swap(V[a], V[b]);
  arrayReverse(V, a + 1, b - 1);
}
bool isSpecial(vector<char> escapeChars, char c)
{
  bool flag = false;
  for (int i = 0; i < escapeChars.size(); i++)
  {
    if (escapeChars[i] == c)
    {
      flag = true;
      return flag;
    }
  }
  return flag;
}
void isPlaindrome(string &str, int a, int b)
{
  if (a >= b)
  {
    return;
  }
  vector<char> escapeChars = {
      '!', '"', '#', '$', '%', '&', '\'', '(', ')',
      '*', '+', ',', '-', '.', '/', ':', ';',
      '<', '=', '>', '?', '@',
      '[', '\\', ']', '^', '_', '`',
      '{', '|', '}', '~', ' '};
  char c1 = str[a];
  char c2 = str[b];
  bool checkSpecialChar1 = isSpecial(escapeChars, c1);
  bool checkSpecialChar2 = isSpecial(escapeChars, c2);

  if (checkSpecialChar1 == false && checkSpecialChar2 == false)
  {
    swap(str[a], str[b]);
    isPlaindrome(str, a++, b--);
  }
  if (checkSpecialChar1 == true)
  {
    isPlaindrome(str, a++, b);
  }
  if (checkSpecialChar2 == true)
  {
    isPlaindrome(str, a, b--);
  }
}
int main()
{
  string str = "Ankit Kuma.r";
  int a = 0;
  int b = str.size() - 1;
  isPlaindrome(str, a, b);
  cout << str;
}
