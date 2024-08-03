#include <iostream>
#include <array>
using namespace std;

// Write Your Function Here
void swapping(string zeft)
{
  int stringcount = zeft.length();
  for (int i = 0; i < stringcount; i++)
  {
    if (zeft[i] == ' ')
    {
      cout << zeft[i];
    }

    if (isupper(zeft[i]))
    {
      cout << char(tolower(zeft[i]));
    }
    else if (islower(zeft[i]))
    {
      cout << char(toupper(zeft[i]));
    }
  }
}
int main()
{
  swapping("hero Of THe PROgramming"); // hERO oF tHE proGRAMMING
  return 0;
}