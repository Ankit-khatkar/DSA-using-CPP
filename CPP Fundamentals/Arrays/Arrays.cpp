#include <iostream>
using namespace std;

int main()
{
  // -----------------------------------
  // --    Array fundamentals         --
  // --                               --
  // -----------------------------------

  // Traversal of Array through loops

  // int arr[] = {20, 15, 32, 7, 8, 10, 85, 74};
  // int length = sizeof(arr) / sizeof(arr[0]);

  // Using through for loop--

  // int i;
  // for (i = 0; i < length; i++)
  // {
  //   cout << arr[i] << endl;
  // }

  // Traverse through for each loop--
  // for (int elem : arr)
  // {
  //   cout << elem << endl;
  // }

  // Traverse through while loop--

  // int index = 0;
  // while (index < length)
  // {
  //   cout << arr[index] << endl;

  //   index++;
  // }

  // take input values for array form user--

  // char vowels[5];
  // for (int idx = 0; idx <= 5; idx++)
  // {
  //   cin >> vowels[idx];
  // }

  // cout << vowels;

  // return 0;

  // Que:- Calculate the sum of all the elements in the given array.

  // int arr[] = {1, 56, 56, 2, 43, 53, 78, 23};
  // int size = sizeof(arr) / sizeof(arr[0]);
  // int idx;
  // int sum = 0;
  // for (idx = 0; idx < size; idx++)
  // {
  //   sum += arr[idx];
  // }
  // cout << sum << endl;

  // Que:- find the maximum value out of all the elements in the array.

  // int arr[] = {1, 56, 56, 2, 43, 53, 78, 23};
  // int size = sizeof(arr) / sizeof(arr[0]);

  // int maxValue = arr[0];
  // for (int idx = 0; idx < size; idx++)
  // {
  //   if (arr[idx] > maxValue)
  //   {
  //     maxValue = arr[idx];
  //   }
  // }
  // cout << maxValue << endl;

  // Que:- Search if a given elemen is present in the array or not. If it is not present then return -1  else return the index.

  // int arr[] = {1, 56, 56, 2, 43, 53, 78, 23};
  // int size = sizeof(arr) / sizeof(arr[0]);

  // cout << "Enter the number that you want to find out in the array." << endl;
  // int num;

  // cin >> num;
  // int ans = -1;
  // for (int idx = 0; idx < size; idx++)
  // {
  //   if (arr[idx] == num)
  //   {
  //     ans = idx;
  //   }
  // }
  // cout << ans << endl;
}