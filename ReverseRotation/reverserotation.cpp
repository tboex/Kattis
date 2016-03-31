#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

std::string replaceStrChar(string str, const string& replace, char ch) {

  // set our locator equal to the first appearance of any character in replace
  size_t found = str.find_first_of(replace);

  while (found != string::npos) { // While our position in the sting is in range.
    str[found] = ch; // Change the character at position.
    found = str.find_first_of(replace, found+1); // Relocate again.
  }

  return str; // return our new string.
}

int getposition(const char *array, size_t size, char c)
{
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == c)
            return (int)i;
    }
    return -1;
}

std::string reverseRot(int amount, std::string input)
{
   std::string str = input;
   char arr[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_','.'};
   std::reverse(str.begin(), str.end());
   cout << "REVERSED STRING: " << str << endl;
   int loc;
   std::string test;
   char test1;
   for(int i = 0; i < input.length(); i++)
   {
      test = str.at(i);
      test1 = str.at(i);
      loc = getposition(arr,sizeof(arr),test1);
      str = replaceStrChar(str,test,arr[(loc+amount)%sizeof(arr)]);
      cout << "Input Char: " << test << "\nCorrect Char: " << str.at(i) << endl;
   }
   cout << "Corrected Word: " << str << endl;
   return str;
}

int main(void)
{
   string input;
   int amount;
   bool cont = true;
   std::vector<std::string> output;
   while(cont == true)
   {
      std::cin >> amount;
      if(amount == 0)
      {
         cont = false;
         break;
      }
      std::cin >> input;
      output.push_back(reverseRot(amount,input));
   }
   for(int i = 0; i < output.size(); i++)
   {
      std::cout << output[i] << endl;
   }
   return 0;
}
