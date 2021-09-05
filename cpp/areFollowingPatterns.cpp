#include <vector>
#include <string>
#include <map>

using namespace std;

bool areFollowingPatterns(vector<string> strings, vector<string> patterns) {
   map<string, string> mapPattern;
   vector<string> inserted;

   for (unsigned i = 0; i < strings.size(); i++)
   {
      if (mapPattern.find(strings[i]) != mapPattern.end())
      {
         if (mapPattern[strings[i]] != patterns[i])
            return false;
      }
      else
         mapPattern[strings[i]] = patterns[i];
   }

   // make sure there are no duplicate values
   // could have used map::count
   for (auto pair : mapPattern)
   {
      for (auto s : inserted)
      {
         if (pair.second == s)
            return false;
      }
      inserted.push_back(pair.second);
   }
   return true;
}

/* Two Map Solution
bool areFollowingPatterns(vector<string> strings, vector<string> patterns) {
    map<string,string> sToP, pToS;
    int n = strings.size();
    for (int i = 0; i < n; ++i) {
        auto& s = strings[i];
        auto& p = patterns[i];
        if (sToP.count(s) > 0 && sToP[s] != p)
            return false;
        if (pToS.count(p) > 0 && pToS[p] != s)
            return false;
        sToP[s] = p;
        pToS[p] = s;
    }
    return true;
}
*/
