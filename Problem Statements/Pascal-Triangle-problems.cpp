#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Given an integer n, print the first n rows of pascal's triangle.

// METHOD 1st- Stright forward approach-------
int get_factorial(int n)
{
  int ans = 1;
  while (n > 0)
  {
    ans = ans * n;
    n--;
  }
  return ans;
}
void pascal_triangle(int n)
{
  int ans;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      ans = get_factorial(i) / (get_factorial(j) * get_factorial(i - j));
      cout << ans << " ";
    }
    cout << endl;
  }
}

// METHOD 2nd- According to DSA prespective-------

int main()
{
}