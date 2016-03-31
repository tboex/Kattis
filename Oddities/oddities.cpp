#include <iostream>
#include <string>

std::string odd(int a)
{
  if( a % 2 == 0 )
  {
    return "even";
  }else{
    return "odd";
  }
}

int main(void)
{
  int a,amount;
  std::cin >> amount;
  for(int i =0; i< amount; i++)
  {
   std::cin >> a;
   std::cout << a << " is " << odd(a) << std::endl;
  }
  return 0;
}
