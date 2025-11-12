#include <bits/stdc++.h>
using namespace std;
// Here are concise problem statements (questions) for each function in your file:

// 1) reverse_num
// - Problem: Write a function reverse_num(int x) that returns the integer formed by reversing the digits of x. If reversing x would cause overflow/underflow beyond the range of a 32-bit signed int, return 0.
// - Input: an int x (can be negative or positive).
// - Output: reversed integer or 0 on overflow.
// - Example: reverse_num(123) -> 321, reverse_num(-120) -> -21.

// 2) isPalindrome
// - Problem: Write a function isPalindrome(int x) that returns true if x reads the same forward and backward (a numeric palindrome), otherwise false. Negative numbers are not palindromes.
// - Input: an int x.
// - Output: bool indicating whether x is a palindrome.
// - Example: isPalindrome(121) -> true, isPalindrome(-121) -> false.

// 3) countdigits
// - Problem: Write a function countdigits(int x) that returns the number of decimal digits in x. Assume x >= 0 (adjust behavior if you want to handle 0 or negatives).
// - Input: an int x.
// - Output: number of digits in x.
// - Example: countdigits(0) -> 1 (if implemented), countdigits(153) -> 3.

// 4) checkArmstrong
// - Problem: Write a function checkArmstrong(int x) that determines whether x is an Armstrong (narcissistic) number: compute the sum of each digit raised to the power of the number of digits, and return true if the sum equals x.
// - Input: an int x >= 0.
// - Output: bool indicating whether x is an Armstrong number.
// - Example: checkArmstrong(153) -> true because 1^3 + 5^3 + 3^3 = 153.

// 5) divisors
// - Problem: Write a function divisors(int N) that finds and prints (or returns) all positive divisors of N in sorted order. Optimize by iterating up to sqrt(N) and collecting pairs.
// - Input: positive integer N.
// - Output: print or return all divisors sorted.
// - Example: divisors(28) -> prints "1 2 4 7 14 28".

// 6) checkPrime
// - Problem: Write a function checkPrime(int N) that returns true if N is a prime number and false otherwise. Use trial division up to sqrt(N).
// - Input: integer N.
// - Output: bool indicating primality.
// - Example: checkPrime(7) -> true, checkPrime(9) -> false.

int reverse_num(int x)
{
  int num = 0;
  while (x != 0)
  {
    int digit = x % 10;
    if ((num > INT_MAX / 10) || (num < INT_MIN / 10))
    {
      return 0; // Return 0 if reversing x would cause overflow/underflow
    }
    num = num * 10 + digit;
    x = x / 10;
  }
  return num;
}
bool isPalindrome(int x)
{
  bool flag = false;
  int actX = x;
  int num = 0;
  while (x != 0)
  {
    int digit = x % 10;
    if ((num > INT_MAX / 10) || (num < INT_MIN / 10))
    {
      return 0;
    }
    num = num * 10 + digit;
    x = x / 10;
  }
  if (actX == num && actX > 0)
  {
    flag = true;
  }
  return flag;
};
int countdigits(int x)
{
  int digits = 0;
  while (x > 0)
  {
    x /= 10;
    digits++;
  }
  return digits;
}
bool checkArmstrong(int x)
{
  int dup = x;
  int numPow = countdigits(dup);
  bool flag = false;
  int ans = 0;

  while (x > 0)
  {
    int digit = x % 10;
    ans += round(pow(digit, numPow));
    x = x / 10;
  }
  if (dup == ans)
  {
    flag = true;
  }
  // cout << ans << endl;
  return flag;
}
void divisors(int N)
{
  vector<int> V;
  int i = 1;
  int dup = N;
  while (i < dup)
  {
    dup = N / i;
    if (N % i == 0)
    {
      V.push_back(i);
      if (dup != i)
      {
        V.push_back(dup);
      }
    }
    i++;
  }
  sort(V.begin(), V.end());
  for (int it : V)
  {
    cout << it << " ";
  }
}
bool checkPrime(int N)
{
  if (N <= 1)
    return false;
  for (int i = 2; i * i <= N; i++)
  {
    if (N % i == 0)
      return false;
  }
  return true;
}

int main()
{
  cout << checkPrime(9);
}