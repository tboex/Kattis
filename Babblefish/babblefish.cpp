#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void)
{
  std::map<string,string> dictionary;
  string key, value, input;
  std::size_t pos;

  while(getline(cin, input) && !input.empty())
  {
    //cout <<"input:" << input << endl;
    pos = input.find(" ");
    value = input.substr(0,pos);
    key = input.substr(pos+1);
    dictionary[key] = value;
    //cout << "key:" << key << "\nvalue:" << value << endl;
  }
  //cout << "SWITCHING TO READING " << endl;
  while(getline(cin,input))
  {
    //cout <<"input:" << input << endl;
    if(dictionary.find(input) != dictionary.end())
    {
      cout << dictionary[input] << endl;
    }else{
      cout << "eh" <<endl;
    }
  }
}
