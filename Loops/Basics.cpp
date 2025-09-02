#include <iostream>
using namespace std;

void outsidefunction()
{
  cout << "I Am Outside Baby" << endl;
}
int main()
{

  // Hollow Rectangular Pattern-------------------

  // for (int i = 0; i <= 3; i++)
  // {
  //   for (int j = 0; j <= 5; j++)
  //     if (i == 0 || j == 0 || j == 5 || i == 3)
  //     {
  //       cout << "*";
  //     }
  //     else
  //     {
  //       cout << " ";
  //     }
  //   cout << endl;
  // }

  // Right Triangular Pattern----------

  // for (int i = 0; i <= 3; i++)
  // {
  //   for (int j = 0; j <= i; j++)
  //   {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // Reverse Right Triangular Pattern----------

  // for (int i = 0; i <= 3; i++)
  // {
  //   for (int j = 0; j <= (3 - i); j++)
  //   {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // Pyramid Pattern------------------------

  // int n;
  // cin >> n;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= (n - i); j++)
  //   {
  //     cout << " ";
  //   }
  //   for (int j = 1; j <= (2 * i - 1); j++)
  //   {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // Numerical Square Pattern---------------------

  // int n;
  // cin >> n;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = i; j <= n; j++)
  //   {
  //     cout << j << " ";
  //   }
  //   for (int j = 1; j <= (i - 1); j++)
  //   {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  // Count the number of digits for the given number n----------------

  // int n;
  // cin >> n;
  // int digits = 0;
  // while (n != 0)
  // {

  //   n /= 10;
  //   digits += 1;
  // }
  // cout << digits << endl;

  // Write the programme to find the sum of digits of given number n----------

  // int n;
  // cin >> n;
  // int sum = 0;

  // while (n > 0)
  // {
  //   int digit;
  //   digit = n % 10;
  //   sum += digit;
  //   n /= 10;
  // }
  // cout << sum;

  // Write the programme to reverse the given number--------

  // int n;
  // cin >> n;
  // string rev_num = "";
  // while (n > 0)
  // {
  //   int digit;
  //   digit = n % 10;
  //   rev_num += to_string(digit);
  //   n /= 10;
  // }
  // cout << rev_num;

  // Write the sum of the following series-----------

  // S = 1 - 2 + 3 - 4 + .............n

  // int n;
  // cin >> n;
  // int result = 0;
  // for (int i = 1; i <= n; i++)
  // {
  //   if (i % 2 == 0)
  //   {
  //     result -= i;
  //   }
  //   else
  //   {
  //     result += i;
  //   }
  // }
  // cout << result;

  // Write the programme to print the n feactorial number----------

  // int n;
  // cin >> n;
  // int result = 1;
  // while (n > 0)
  // {
  //   result *= n;
  //   if (n == 0)
  //   {
  //     cout << result;
  //   }
  //   n--;
  // }
  // cout << result;

  // Write the programme to find the a raise to the power b.

  int a, b;
  cin >> a >> b;
  int ans = 1;
  for (int i = 1; i <= b; i++)
  {
    ans *= a;
  }
  cout << ans;

  return 0;
}