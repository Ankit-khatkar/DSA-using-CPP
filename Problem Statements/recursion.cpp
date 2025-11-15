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

// QUE:- A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
bool isSpecial(vector<char> &escapeChars, char c)
{
  for (char x : escapeChars)
    if (x == c)
      return true;
  return false;
}

string revserestr(string &str, int a)
{
  if (a >= str.size())
  {
    reverse(str.begin(), str.end());
    return str;
  }
  vector<char> escapeChars = {
      '!', '"', '#', '$', '%', '&', '\'', '(', ')',
      '*', '+', ',', '-', '.', '/', ':', ';',
      '<', '=', '>', '?', '@',
      '[', '\\', ']', '^', '_', '`',
      '{', '|', '}', '~', ' '};
  bool s1 = isSpecial(escapeChars, str[a]);
  if (s1)
  {
    str.erase(a, 1);
    return revserestr(str, a);
  }
  str[a] = tolower(str[a]);
  return revserestr(str, a + 1);
}
bool isPlaindrome(string &str)
{
  int x = 0;
  string new_str = revserestr(str, x);

  int y = new_str.size() - 1;

  while (x < y)
  {
    if (new_str[x] != new_str[y])
    {
      return false;
    }
    x++;
    y--;
  }
  // cout << flag;
  return true;
}

int main()
{
  string str = "Able was I ere I saw Elba";
  cout << isPlaindrome(str);
}
