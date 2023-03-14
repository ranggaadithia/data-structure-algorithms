#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int sizeArray)
{
  int left = 0, right = sizeArray - 1;

  while (left <= right)
  {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }
  }

  return false;
}

int main()
{
  int arr[] = {1, 3, 5, 7, 9, 11};
  int target;
  int sizeArray = sizeof(arr) / sizeof(arr[0]);
  cout << "Input Number : ";
  cin >> target;

  int result = binarySearch(arr, target, sizeArray);

  if (result == false)
  {
    cout << "Element not found" << endl;
  }
  else
  {
    cout << "Element found at index -" << result << endl;
  }

  return 0;
}
