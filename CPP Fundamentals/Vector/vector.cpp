#include <iostream>
using namespace std;
#include <vector>

int main()
{
  // Basic Opeartions in vector---

  // 1. Declaration
  // #include <vector>
  // vector <datatype> vector-name ;
  // vector <datatype> vector-name (size);

  // 2. Size
  // v.size() -----> length

  // 3. Resize
  // v.resize(new size);
  // v.resize(8);
  // v.size=8

  // 4. Capacity
  //  v.capacity()
  //  capacity>=size

  // if size=1  then capacity=1
  // if size=2  then capacity=2
  // if size=3  then capacity=4
  // if size=5   then capacity=8

  // Note:- capacity increases in 2's power.

  // 5. Add Elements
  // v.push_back(element);
  // v.insert(position, element);
  // Here position is respect to the first element.
  // position of first element------ v.begin()
  // position of last element-------v.end()

  // Ex:- v.insert(v.begin()+2,5);
  // Here at the 3rd position 5 will be added.

  // 6. Delete Elements
  // v.pop_back()------here element will be delete at the last position.
  // v.erase(position);
  // it is respect to the first element.
  // v.erase(v.end()-2);
  // 3rd element from the last will be deleted.

  // vector<int> even_nums(10);
  // even_nums.push_back(4);
  // even_nums.push_back(12);
  // cout << even_nums.size() << endl;
  // cout << even_nums.capacity();

  // 7. Looping in Vector
  // vector<int> numbers;
  // for (int i = 0; i < 5; i++)
  // {
  //   int element;
  //   cin >> element;
  //   numbers.push_back(element);
  // }

  // numbers.insert(numbers.begin() + 1, 6);
  // for (int num : numbers)
  // {
  //   cout << num << " ";
  // }

  // Que:- find the last occrance of an element x in the given vector.

  // vector<int> nums = {4, 3, 6, 5, 36, 4, 56, 2};
  // cout << "Input Your Number Here ";
  // int elem;
  // cin >> elem;
  // int last_idx = -1;
  // for (int i = 0; i < nums.size(); i++)
  // {
  //   if (elem == nums[i])
  //   {
  //     last_idx = i;
  //   }
  // }
  // cout << last_idx;

  // Here is alternative method for  saving time complexity.

  // vector<int> nums = {4, 3, 6, 5, 36, 4, 56, 2};
  // cout << "Input Your Number Here ";
  // int elem;
  // cin >> elem;
  // int last_idx = -1;

  // int x = nums.size() - 1;
  // while (true)
  // {
  //   if (nums[x] == elem)
  //   {
  //     last_idx = x;
  //     break;
  //   }
  //   x--;
  // }
  // cout << last_idx;

  // Que:- Count the number of elements strictly greater than value x.

  // vector<int> nums = {4, 3, 6, 5, 36, 4, 56, 2};
  // cout << "Input Your Number Here ";
  // int x;
  // cin >> x;
  // int occurance = 0;
  // for (int elem : nums)
  // {
  //   if (elem > x)
  //   {
  //     occurance += 1;
  //   }
  // }
  // cout << occurance;

  // Que:- Check if the given array is sorted or not ?

  // vector<int> nums = {5, 7, 44, 56, 289, 586, 4, 759, 1000};

  // int sorting_value = -1;
  // string sorting_msg = "Array is Sorted";
  // for (int elem : nums)
  // {
  //   if (elem >= sorting_value)
  //   {
  //     sorting_value = elem;
  //   }
  //   else
  //   {
  //     sorting_msg = "Array is not sorted";
  //     break;
  //   }
  // }
  // cout << sorting_msg << endl;

  // Que:- find the diffrence between the sum of the even indices to the sum of odd indices.

  // vector<int> nums = {7, 7, 7, 7, 7, 7};
  // int result = 0;
  // for (int i = 0; i < nums.size(); i++)
  // {
  //   if (i % 2 == 0)
  //   {
  //     result += nums[i];
  //   }
  //   else
  //   {
  //     result -= nums[i];
  //   }
  // }
  // cout << result;
}