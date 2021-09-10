#include <vector>

using namespace std;

int arrayMaxConsecutiveSum2(std::vector<int> inputArray) {
   int globalMax = inputArray[0];
   int currentMax = inputArray[0];
   for (int i = 1; i < inputArray.size(); i++) {
      currentMax = max(currentMax + inputArray[i], inputArray[i]);
      globalMax = max(currentMax, globalMax);
   }
   return globalMax;
}
