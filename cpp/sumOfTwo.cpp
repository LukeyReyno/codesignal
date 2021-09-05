#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool sumOfTwo(vector<int> a, vector<int> b, int v) {
   sort(a.begin(), a.end());
   sort(b.rbegin(), b.rend()); //reverse sort
   auto itA = a.begin();
   auto itB = b.begin();
   while (itA != a.end() && itB != b.end())
   {
      auto res = *itA + *itB;
      if (res == v)
         return true;
      if (res > v)
         itB++;
      else
         itA++;
   }
   return false;
}
