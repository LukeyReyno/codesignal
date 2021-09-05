#include <vector>

using namespace std;

int singleNumber(std::vector<int> nums) {
   int res = 0;
   for (int num : nums) {
      // Every number appears twice except for one of them
      // XOR will cancel any number that appears twice
      // XOR will keep the number that appears once
      res ^= num;
   }
   return res;
}
