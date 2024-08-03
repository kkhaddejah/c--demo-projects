#include <iostream>
using namespace std;

int main()
{
  int nums[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
  for (int i = 0; i < 28; i += 3)
  {
    cout << nums[i] << "\n";
  }
  int j = 0;
  while (j < 28)
  {
    cout << nums[j] << "\n";
    j += 3;
  }

  // Output Needed
  // 0
  // 3
  // 6
  // 9
  // 12
  // 15
  // 18
  // 21
  // 24
  // 27
  return 0;
}