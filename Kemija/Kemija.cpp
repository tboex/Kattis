#include <iostream>
#include <string>

using namespace std;

string decode(string input)
{
   for(int i = 0; i < input.length(); i++)
   {
      if(input.at(i) == 'a' ||input.at(i) == 'e' || input.at(i) == 'i' || input.at(i) == 'o' || input.at(i) == 'u')
      {
         input.erase(i,2);
      }
   }
   return input;
}

int main(void)
{
   string passcode;
   string fin;
   while(cin >> passcode)
   {
      cout << passcode << endl;
      fin += decode(passcode) + " ";
   }
   cout << fin;
   return 0;
}
