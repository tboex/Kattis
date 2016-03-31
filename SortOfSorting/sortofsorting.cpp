#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
  vector<string> myVec;
  vector<string> finalVec;
  int ca;
  bool contin = true;
  string input;

  while(contin == true)
  {
    std::cin >> ca;
    if(ca == 0)
    {
      contin = false;
    }
    for(int i = 0; i < ca; i ++)
    {
      std::cin >> input;
      myVec.push_back(input);
    }
    std::sort(myVec.begin(),myVec.end());
    for(int i = 0; i < ca; i++ )
    {
      finalVec.push_back(myVec[i]);
    }
    finalVec.push_back(" ");
    myVec.clear();
  }
  for(int i = 0; i < finalVec.size();i++)
  {
    cout << finalVec[i] << endl;
  }
  return 0;
}
