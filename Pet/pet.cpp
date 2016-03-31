#include <iostream>

int main(void)
{
  int a, b, c, d;
  int Sums[5];
  int largest = 0;
  int pos = 0;

  for(int i = 0; i < 5; i++)
  {
    std::cin >> a >> b >> c >> d;
    Sums[i] = a + b + c + d;
  }

  largest = Sums[0];
  for(int j = 0; j < 5; j++)
  {
    if(Sums[j] > largest)
    {
      largest = Sums[j];
      pos = j;
    }
  }
  std::cout << pos + 1 << " " << Sums[pos] << std::endl;
  return 0;
}
