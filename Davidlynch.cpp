#include <iostream>
using namespace std;

int main()
{
  int nums[]{2, 3, 4, 5, 6, 7, 8, 9, 10};
  int index = 0;
  for (;;) // <= Do Not Edit This Line
  {
    cout << index << "\n"; // From 2 To 10
    if (index == 8)
    {
      break;
    }
    index++;
  }

  // Output
  // 2
  // 3
  // 4
  // 5
  // 6
  // 7
  // 8
  return 0;
}