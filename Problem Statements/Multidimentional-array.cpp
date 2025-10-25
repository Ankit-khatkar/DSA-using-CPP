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

int main()
{
  const std::vector<std::vector<int>> v = {{1, 2, 3}, {4, 5, 6}};
  transpose_matrix(v);
}