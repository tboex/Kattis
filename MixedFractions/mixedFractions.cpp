#include <iostream>

long long remainder(long long a, long long b)
{
  if (a != 0 && b != 0){
    return a%b;
  }else if(b == 0)
  {
    return a;
  }
  return 0;
}

long long result(long long a, long long b)
{
  if (a != 0 && b != 0)
  {
    return a/b;
  }else if (b == 0)
  {
    return a;
  }
  return 0;
}

int main(void)
{
  long long a, b;
  while (std::cin >> a >> b)
  {
    if(a != 0 && b != 0){
    std::cout << result(a,b) << " " << remainder(a,b) << " / "<< b << std::endl;
    }else{
      break;
    }
  }
  return 0;
}
