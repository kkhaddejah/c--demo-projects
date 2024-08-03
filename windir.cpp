#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  switch (num)
  {
  case 10:
    cout << "case one \n";
    break;
  case 20:
    cout << "case two \n";
    break;
  case 30:
  case 31:
  case 32:
    cout << "case three \n";
    break;
  default:
    cout << "Invalid number \n";
    break;
  }

  return 0;
}