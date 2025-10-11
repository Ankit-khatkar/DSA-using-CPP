#include <iostream>
#include <vector>
using namespace std;

// QUE:- Find the total number of pairs in the array whose sum is equal to the given value x.

void find_pairs(vector<int> arr, int target)
{
  int pairs = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = i + 1; j < arr.size(); j++)
    {
      int sum = arr[i] + arr[j];
      if (sum == target)
      {
        pairs += 1;
      }
    }
  }
  cout << pairs;
}

// QUE:-  Given an array of integers arr[] and an integer x, find the total number of triplets in the array whose sum is equal to the given value x.

void triplet_trgtSum(vector<int> arr, int target)
{
  int triplets = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = i + 1; j < arr.size(); j++)
    {
      for (int k = j + 1; k < arr.size(); k++)
      {
        int sum = arr[i] + arr[j] + arr[k];
        if (sum == target)
        {
          triplets++;
        }
      }
    }
  }
  cout << triplets;
}

// QUE:- "Find the unique number in a given Array where all the elements are being repeated twice with one value being unique."

int main()
{
  vector<int> arr = {2, 3, 4, 2, 3};
  int target = 9;
  // unique_num(arr);
}