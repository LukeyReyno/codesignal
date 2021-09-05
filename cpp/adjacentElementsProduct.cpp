#include <vector>

using namespace std;

int adjacentElementsProduct(vector<int> inputArray) {
   int calc;
   int maxNum = inputArray[0] * inputArray[1];
   for (unsigned i = 1; i < inputArray.size() - 1; i++)
   {
      if ((calc = inputArray[i] * inputArray[i+1]) > maxNum)
         maxNum = calc;
   }

   return maxNum;
}
