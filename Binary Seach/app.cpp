#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 3, 5, 7, 9, 11};
  int target;
  int sizeArray = sizeof(arr) / sizeof(arr[0]);
  cout << "Masukan Nomor yang ingin dicari : ";
  cin >> target;
  int left = 0, right = sizeArray - 1;

  while (left <= right)
  {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
    {
      cout << "Nilai ditemukan pada indeks ke-" << mid << endl;
      return 0;
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

  return 0;
}
