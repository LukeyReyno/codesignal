#include <string>
#include <vector>
#include <map>

char firstNotRepeatingCharacter(std::string s)
{
   std::map<char, unsigned> charMap;
   std::vector<char> insertionOrder;
   for (auto c : s)
   {
      if (charMap[c]++ == 0) // new char
         insertionOrder.push_back(c);
   }

   for (auto c : insertionOrder)
   {
      if (charMap[c] == 1)
         return c;
   }

   return '_';
}
