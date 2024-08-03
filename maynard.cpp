#include <iostream>
using namespace std;

int main()
{
  // Example 1
  int check = 25;
  int nums[]{40, 20, 30, 70, 100};
  cout << "{40} + {70} = " << nums[0] + nums[3] << "\n";
  // Ouput
  // "{40} + {70} = 110"

  // Example 2
  int check2 = 25;
  int nums2[]{20, 35, 30, 70, 100};
  cout << "{35} + {70} = " << nums2[1] + nums2[3] << "\n";
  // Ouput
  // "{35} + {70} = 105"

  // Example 2
  int check3 = 25;
  int nums3[]{20, 25, 30, 70, 100};
  cout << "{30} + {70} = " << nums3[2] + nums3[3] << "\n";
  // Ouput
  // "{30} + {70} = 100"
  return 0;
}