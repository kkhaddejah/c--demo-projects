#include <iostream>
using namespace std;

int main()
{
  int nums[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  for (int i = 0; i < 19; i += 2)
  {
    cout << nums[i] << "\n";
  }
  int j = 0;
  while (j < 19)
  {
    cout << nums[j] << "\n";
    j += 2;
  }

  // Output Needed
  // 0
  // 2
  // 4
  // 6
  // 8
  // 14
  // 16
  // 18
  return 0;
}