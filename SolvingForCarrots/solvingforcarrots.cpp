#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  int one, two;
  string temp;
  std::cin >> one;
  std::cin >> two;
  for(int i = 0; i < one; i++)
  {
     std::cin >> temp;
  }
  std::cout << two << std::endl;
  return 0;
}
