#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// QUE:- Check if we can partition the array into two subarrays with equal sum. More formally, check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.

bool prefix_suffixSum(vector<int> &v)
{
  int i = 0;
  int totalSum = 0;
  while (i < v.size())
  {
    totalSum += v[i];
    i++;
  }
  for (int i = 1; i <= v.size(); i++)
  {
    v[i] = v[i - 1] + v[i];
    if (v[i] == totalSum - v[i])
    {
      return true;
    }
  }
  return false;
}

// QUE:- Given an array of integers of size n. Answer q queries where you need to print the sum of values in a given range of indices from I to r (both included).

// Note: The values of I and r in queries follow 1-based indexing.
void queryIndexSum(vector<int> &v, int l, int r)
{
  int sum = 0;
  for ((l - 1); l <= r; l++)
  {
    sum += v[l - 1];
  }
  cout << sum;
}

int main()
{
}