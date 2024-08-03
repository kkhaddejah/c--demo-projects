#include <iostream>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
  for (int i = 0; i < 5; i++)
  {
    if (friends[i][0] == 'A')
    {
      cout << friends[i] << "\n";
    }
  }
  int j = 0;
  while (j < 5)
  {
    if (friends[j][0] == 'A')
    {
      cout << friends[j] << "\n";
    }
    j++;
  }

  // Output Needed
  // "Ahmed"
  // "Ashraf"
  // "Amany"
  return 0;
}