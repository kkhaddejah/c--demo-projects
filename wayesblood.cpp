#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80};
  vector<int>::iterator it = numbers.begin();

  // Write Method One
  // Method One
  it = std::find(numbers.begin(), numbers.end(), -1);
  if (it != numbers.end())
  {
    *it = -1; // Replace -1 with -1 to effectively keep the value unchanged (50).
  }

  // Write Method Two

  // Write Method Three

  cout << *it << "\n"; // 50
  return 0;
}