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

// By bruteforce approach-----
void getUniqueElem01(vector<int> arr)
{
  int unique_elem = -1;
  int unique_idx;
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr.size(); j++)
    {
      if (arr[i] == arr[j] && i != j)
      {
        break;
      }
      if (j == arr.size() - 1)
      {
        unique_elem = arr[i];
        unique_idx = i;
        break;
      }
    }
    if (unique_idx == i)
    {
      break;
    }
  }
  if (unique_elem != -1)
    cout << unique_elem;
  else
    cout << "No unique element found";
}

// alternative method-------
void getUniqueElem02(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = i + 1; j < arr.size(); j++)
    {
      if (arr[i] == arr[j])
      {
        arr[i] = arr[j] = -1;
      }
    }
  }
  int unique = 0;
  for (int k = 0; k < arr.size(); k++)
  {
    if (arr[k] > 0)
    {
      unique = arr[k];
      cout << unique << endl;
      break;
    }
  }
}

// QUE:- find the second largest element in the given array.

int largest_elem(vector<int> arr)
{
  int max_val = arr[0];
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > max_val)
    {
      max_val = arr[i];
    }
  }
  return max_val;
}
void scecond_largest_elem(vector<int> arr)
{
  int max_elem = largest_elem(arr);
  for (int j = 0; j < arr.size(); j++)
  {
    if (arr[j] == max_elem)
    {
      arr[j] = -1;
    }
  }
  int second_largest_elem = largest_elem(arr);
  cout << second_largest_elem;
}

int main()
{
  vector<int> arr = {};
  scecond_largest_elem(arr);
}