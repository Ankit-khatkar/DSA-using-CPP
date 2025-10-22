#include <iostream>
#include <vector>
#include <algorithm>
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

// Que:- Rotate the given array 'a' by k steps, where k is non-negative integer.
// (Note:-  k can be greater than size of array.)

void reverse_arr(vector<int> arr, int k)
{
  if (arr.empty())
  {
    cout << "Empty Array Cannot be reversed.";
    return;
  }
  k = k % arr.size(); // Handles k > arr.size()
  if (k == 0)
  {
    for (int num : arr)
      cout << num << " ";
    return;
  }
  // Print rotated array
  for (int i = arr.size() - k; i < arr.size(); i++)
    cout << arr[i] << " ";
  for (int i = 0; i < arr.size() - k; i++)
    cout << arr[i] << " ";
}

// Que:- Given Q queries, check is the given number is present in the array or not.
// Note: Value at all the elements in the array is less than 10 to the power 5.

vector<int> input_quries()
{
  vector<int> querie_vector;
  while (true)
  {
    int q;
    cin >> q;
    if (q == 0)
    {
      break;
    }
    querie_vector.push_back(q);
  }
  sort(querie_vector.begin(), querie_vector.end());
  return querie_vector;
}

int Max_Value(vector<int> arr)
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

/**
 * check_elem - Check presence of queried integers in the given array and print results.
 *
 * @param arr  A vector<int> containing the elements to be searched.
 *
 * Description:
 *   - Obtains a list of query integers by calling input_quries().
 *   - Determines the maximum value in arr using Max_Value(arr).
 *   - Builds a presence vector `target_vector` of size (max_index + 1) initialized to 0.
 *     For each value v in arr, sets target_vector[v] = 1 to mark presence.
 *   - Iterates through the queries and prints whether each query value is present
 *     in arr using std::cout.
 *
 * Side effects:
 *   - Calls input_quries() to retrieve queries.
 *   - Calls Max_Value(arr) to compute the maximum element.
 *   - Writes output to standard output (cout).
 *
 * Assumptions and limitations:
 *   - Assumes elements of arr are non-negative integers (values used as indices).
 *   - If a query value is greater than the maximum element in arr, the current
 *     implementation will attempt to index target_vector out of bounds, leading to
 *     undefined behavior.
 *   - The function takes arr by value (makes a copy). For large arrays, this is
 *     inefficient.
 *
 * Complexity:
 *   - Time: O(n + q) where n = arr.size() and q = number of queries (ignoring cost
 *     of input_quries() and Max_Value()).
 *   - Space: O(max(arr) + 1) for the presence vector. This can be large if the
 *     maximum value in arr is large.
 *
 * Suggested improvements:
 *   - Change signature to take const std::vector<int>& arr to avoid copying.
 *   - Validate each query against target_vector.size() before indexing to avoid
 *     out-of-range access.
 *   - For arrays with very large maximum values or sparse values, consider using
 *     std::unordered_set<int> to store elements and check membership to reduce memory usage.
 */
void check_elem(vector<int> arr)
{
  vector<int> quries_vector = input_quries();

  int max_index = Max_Value(arr);
  vector<int> target_vector(max_index + 1, 0);
  for (int i = 0; i < arr.size(); i++)
  {
    target_vector[arr[i]] = 1;
  }

  for (int i = 0; i < quries_vector.size(); i++)
  {
    if (target_vector[quries_vector[i]] != 1)
    {
      cout << quries_vector[i] << " is not present in array." << endl;
    }
    else
    {
      cout << quries_vector[i] << " is present in array." << endl;
    }
  }
}
int main()
{
  vector<int> arr = {10, 20, 30, 40, 50};
  check_elem(arr);
}