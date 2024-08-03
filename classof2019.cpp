#include <iostream>
using namespace std;

int main()
{
  int year;
  cin >> year;
  switch (year)
  {
  case 1982:
    cout << "My birth year. \n";
    break;
  case 1989:
    cout << "My first work. \n";
    break;
  case 1995:
    cout << "Windows 95. \n";
    break;
  case 2000:
    cout << "Windows Millennium. \n";
    break;
  case 2002:
    cout << "Created My vBulletin Forum. \n";
    break;
  default:
    cout << "No Events in This Year.";
    break;
  }
}
/*
  1982 => "My Birth Day"
  1989 => "My First Work"
  1995 => "Windows 95"
  2000 => "Windows Millennium"
  2002 => "Created My vBulletin Forum"
  Any Other Year => "No Events in This Year"
*/