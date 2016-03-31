#include <iostream>
#include <math.h>
#include <string>

using namespace std;

bool isPrime(int num)
{
   if (num <=1)
   {
      return false;
   }
   else if (num == 2)
   {
      return true;
   }
   else if (num % 2 == 0)
   {
      return false;
   }
   else
   {
      bool prime = true;
      int divisor = 3;
      double num_d = static_cast<double>(num);
      int upperLimit = static_cast<int>(sqrt(num_d) +1);
      while (divisor <= upperLimit)
      {
         if (num % divisor == 0)
         {
            prime = false;
         }
         divisor +=2;
      }
      return prime;
    }
}

void representations(int input)
{
   int count = 0;
   string fin = "";
   for(int i = 2; i <= input/2; i++)
   {
      if(isPrime(i) == true && isPrime(input-i)==true)
      {
         count++;
         fin += to_string(i) + "+" + to_string(input-i) + "\n";
      }
   }
   cout << input << " has " << count << " representation(s)" <<endl;
   cout << fin<<"\n";
}

int main(void)
{
   int amount, temp;
   std::cin >> amount;
   for(int i = 0; i < amount; i++)
   {
      cin >> temp;
      representations(temp);
   }
   return 0;
}
