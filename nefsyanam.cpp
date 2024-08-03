#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = {100, 200, 300, 400};
  for (int n : nums)
  {
    cout << n << "\n";
  }
  nums.push_back(500);
  cout << "First element is: " << *nums.begin() << "\n";
  cout << "Last element is: " << *(nums.end() - 1) << "\n";

  return 0;
}