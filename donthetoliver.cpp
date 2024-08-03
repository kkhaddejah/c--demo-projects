#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  if (num % 2 == 0)
  {
    cout << "The number " << num << " is even\n";
  }
  else
  {
    cout << "The number " << num << " is odd\n";
  }
}