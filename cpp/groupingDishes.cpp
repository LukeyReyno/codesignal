#include <vector>
#include <string>
#include <map>
#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupingDishes(vector<vector<string>> dishes) {
   map<string, vector<string>> ingredients;
   vector<vector<string>> results;

   for (auto list : dishes)
   {
      for (auto it = (++list.begin()); it != list.end(); it++)
         ingredients[*it].push_back(list[0]);
   }

   for (auto jt = ingredients.begin(); jt != ingredients.end(); jt++)
   {
      if (jt->second.size() > 1)
      {
         sort(jt->second.begin(), jt->second.end());
         jt->second.insert(jt->second.begin(), jt->first);
         results.push_back(jt->second);
      }
   }
   return results;
}
