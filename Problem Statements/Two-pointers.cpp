/*
File: /d:/Programming Projects/DSA using CPP/Problem Statements/Two-pointers.cpp
Author: Ankit Khatkar
Created: 22-10-2025
Description:
  Collection / workspace for implementing problems that use the "two pointers"
  technique from the DSA (Data Structures & Algorithms) domain. This file is
  intended to house solution functions, helpers and small test harnesses for
  common two-pointer patterns such as pair-sum, triplet-sum (after fixing one
  element), sliding window, removing duplicates in-place, merging sorted
  sequences, and partitioning problems.

Intended usage:
  - Implement individual functions for each problem (prefer returning results
    rather than printing directly, to make unit testing easier).
  - Keep each solution focused and document its preconditions (e.g. input
    must be sorted). If sorting is required, note the extra O(n log n) cost.
  - Use main() only for small ad-hoc tests or demo runs; consider separate
    test files for extensive testing.

Common patterns covered:
  - Two indices moving from both ends (left/right) toward each other.
  - One pointer expanding/contracting window with another pointer tracking
    window boundaries (sliding window).
  - Fixed element + two-pointer sweep for 3-sum type problems.
  - In-place deduplication and partitioning using slow/fast pointers.

Complexity notes:
  - Pure two-pointer sweeps typically run in O(n) time and O(1) extra space.
  - Problems that require sorting first will have O(n log n) total time.
  - Sliding window variants often give O(n) time with O(1) extra space, but
    may require additional structures (maps/sets) when constraints demand.

Headers typically required:
  - <vector>, <algorithm>, <iostream> (already included for convenience)
  - Add <unordered_map>, <limits>, <numeric> as needed per-problem.

Style suggestions:
  - Favor clear, well-named helper functions (e.g., twoSumSorted, threeSum,
    longestSubarrayAtMostK).
  - Document preconditions: whether input must be sorted, whether duplicates
    are allowed, expected return format (indices vs values).
  - Write small unit tests for edge cases: empty inputs, single-element,
    all-equal elements, very large/small values.

Example comment template for a solution function:
  // twoSumSorted: given sorted vector<int> a and target sum, return pair of
  // indices (i, j) with i < j and a[i] + a[j] == target, or (-1, -1) if none.
  // Complexity: O(n) time, O(1) space. Preconditions: 'a' must be sorted.

Notes:
  - This file is a problem-solving playground; remove or refactor code into
    dedicated modules when solutions stabilize.
  - Remember to handle integer overflow when summing large values.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// QUE:- Sort an array consisting only 0s and 1s.

void sort_binary_arr(vector<int> &arr)
{
  int right = arr.size() - 1;
  int left = 0;
  while (left < right)
  {

    if (arr[left] == 0)
    {
      left++;
    }
    else if (arr[right] == 1)
    {
      right--;
    }
    else if (arr[left] == 1 && arr[right] == 0)
    {
    std:
      swap(arr[right], arr[left]);
      left++;
      right--;
    }
  }
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}

// QUE:- Given an array of integers 'a', move all the even integers at the beginning of the array followed by all the odd integers. The relative order of odd or even integers does not matter. Return any array that satisfies the condition.

void sort_odvn_arr(vector<int> arr)
{
  int left = 0;
  int right = arr.size() - 1;
  while (left < right)
  {
    if (arr[left] % 2 == 0)
    {
      left++;
    }
    else if (arr[right] % 2 != 0)
    {
      right--;
    }
    else if (arr[left] % 2 != 0 && arr[right] % 2 == 0)
    {
    std:
      swap(arr[right], arr[left]);
      left++;
      right--;
    }
  }
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}

// QUE:-  Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

void sort_get_squrarr(vector<int> &arr)
{
  int left = 0;
  int right = arr.size() - 1;
  vector<int> squr_arr;
  while (left <= right)
  {
    if (abs(arr[left]) > abs(arr[right]))
    {
      squr_arr.push_back(arr[left] * arr[left]);
      left++;
    }
    else
    {
      squr_arr.push_back(arr[right] * arr[right]);
      right--;
    }
  }
  int i = squr_arr.size() - 1;
  while (i >= 0)
  {
    cout << squr_arr[i] << " ";
    i--;
  }
}
int main()
{
  vector<int> arr = {3, 2, 2, 3};
  // sort_get_squrarr(arr);
}