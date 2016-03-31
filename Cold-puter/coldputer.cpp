#include <iostream>

using namespace std;

int main(void)
{
  int count, temp;
  int lessThanFreezing = 0;
  std::cin >> count;
  for(int i= 0; i< count; i++)
  {
    std::cin >> temp;
    if(temp < 0)
    {
      lessThanFreezing++;
    }
  }
  std::cout << lessThanFreezing << std::endl;
}
