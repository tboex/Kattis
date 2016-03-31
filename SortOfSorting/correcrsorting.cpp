#include <iostream>
#include <string>
#include <vector>

bool checkSort(std::vector<std::string> tempVec)
{
   for(int i = 0; i < tempVec.size()-1; i++)
   {
      if(tempVec[i].at(0) > tempVec[i+1].at(0))
      {
         return false;
      }
   }
   return true;
}

std::vector<std::string> alphSort(std::vector<std::string> tempVec)
{
   std::string temp;
   for(int i = 0; i < tempVec.size()-1; i++)
   {
      if(tempVec[i].at(0) >  tempVec[i+1].at(0))
      {
         std::swap(tempVec[i],tempVec[i+1]);
      }
      else if(tempVec[i].at(0) == tempVec[i+1].at(0))
      {
         if(tempVec[i].at(1) > tempVec[i+1].at(1))
         {
 	    std::swap(tempVec[i],tempVec[i+1]);
	 }
      }
   }
   if(checkSort(tempVec) == false)
   {
      alphSort(tempVec);
   }else{
   return tempVec;
   }
   return tempVec;
}

int main(void)
{
   int amount;
   std::string input;
   std::vector<std::string> inputVec;
   std::vector<std::string> finalVec;
   bool cont=true;

   while(cont == true)
   {
      std::cin >> amount;
      if(amount == 0)
      {
         cont = false;
         break;
      }
      for(int i = 0; i < amount; i++)
      {
         std::cin >> input;
         inputVec.push_back(input);
      }
      inputVec = alphSort(inputVec);
      for(int i = 0; i < inputVec.size(); i++)
      {
         finalVec.push_back(inputVec[i]);
      }
      finalVec.push_back(" ");
      inputVec.clear();
   }
   for(int i = 0; i < finalVec.size()-1; i++)
   {
      std::cout << finalVec[i] << std::endl;
   }
   return 0;
}
