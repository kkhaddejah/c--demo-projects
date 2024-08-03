#include <iostream>
using namespace std;

int main()
{
  // Example 1
  int vals[] = {100, 200, 600, 200, 100};
  if (vals[0] == vals[4])
  {
    cout << "Array Is Palindrome\n";
  }

  // Output
  // "Array Is Palindrome"

  // Example 2
  int vals2[] = {100, 200, 200, 100};
  if (vals2[0] == vals2[3])
  {
    cout << "Array Is Palindrome\n";
  }

  // Output
  // "Array Is Palindrome"

  // Example 3
  int vals3[] = {100, 300, 600, 200, 700};
  if (vals3[0] == vals3[4])
  {
    cout << "Array Is Palindrome\n";
  }
  else
    cout << "Array Is Not Palindrome";

  // Output
  // "Array Is Not Palindrome"
  return 0;
}