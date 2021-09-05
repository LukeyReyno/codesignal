#include <map>
#include <vector>

using namespace std;

bool containsCloseNums(vector<int> nums, int k) {
   map<int, int> numToNumDistance;

   for (unsigned i = 0; i < nums.size(); i++)
   {
      if (numToNumDistance.find(nums[i]) == numToNumDistance.end())
         numToNumDistance[nums[i]] = i;
      else
      {
         if (i - numToNumDistance[nums[i]] <= k)
            return true;
         numToNumDistance[nums[i]] = i;
      }
   }
   return false;
}
