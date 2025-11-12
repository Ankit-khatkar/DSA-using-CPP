#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Que:- Write a program to display transpose of matrix entered by the user.

void transpose_matrix(const std::vector<std::vector<int>> &arr)
{

  for (int i = 0; i < arr[0].size(); i++)
  {

    for (int j = 0; j < arr.size(); j++)
    {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
}

// Que:- Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
//  Method 1st (Basic)-------------------------------
void max1s(const vector<vector<int>> &arr)
{
  vector<int> v;
  for (int i = 0; i < arr.size(); i++)
  {
    int row_ans = 0;

    for (int j = 0; j < arr[i].size(); j++)
    {
      if (arr[i][j] == 1)
      {
        row_ans++;
      }
    }
    v.push_back(row_ans);
    row_ans = 0;
  }
  int max_idx = 0;
  int idx;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] > max_idx)
    {
      max_idx = v[i];
      idx = i;
    }
  }
  cout << idx;
}

// Method 2nd (Improved)----------------------------
void maxOnesRow(const vector<vector<int>> &arr)
{
  int maxOns = INT8_MIN;
  int maxOnesRow = -1;
  int cols = arr[0].size();
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr[i].size(); j++)
    {
      if (arr[i][j] == 1)
      {
        int numberofOnes = cols - j;
        if (numberofOnes > maxOns)
        {
          maxOns = numberofOnes;
          maxOnesRow = i;
        }
        break;
      }
    }
  }
  cout << maxOnesRow;
}

// Method 3rd (Imporoved)---------------------------
void leftMostAppraoch(const vector<vector<int>> &arr)
{
  int anscol = arr[0].size();
  int ansrow = -1;
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr[i].size(); j++)
    {
      if (arr[i][j] == 1)
      {
        if (j < anscol)
        {
          anscol = j;
          ansrow = i;
        }
        break;
      }
    }
  }
  cout << ansrow;
}

// QUE:- Reverse the matrix 90 degree without using any extra space.
void reverseMatrix(vector<vector<int>> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = 0; j < i; j++)
    {
      swap(v[i][j], v[j][i]);
    }
  }
  for (int i = 0; i < v.size(); i++)
  {
    reverse(v[i].begin(), v[i].end());
  }
  return;
}

void totaldigits(int x)
{
  int digits = 0;
  while (x > 0)
  {
    x /= 10;
    digits++;
  }
  cout << digits;
}
int main()
{
  totaldigits(123);
  return 0;
}