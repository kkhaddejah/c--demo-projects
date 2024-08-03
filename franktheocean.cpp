#include <iostream>
using namespace std;

int main()
{
  int g = 20;
  double h = 20.5;
  cout << g + (int)h << "\n";
  cout << sizeof(g + (int)h) << "\n";
}