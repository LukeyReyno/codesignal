#include <unordered_set>
#include <vector>

using namespace std;

int possibleSums(vector<int> coins, vector<int> quantity) {
   unordered_set<int> poss;
   poss.insert(0);

   // add coin value and increase quantity to each coin sum in set
   for(int i = 0; i < coins.size(); ++i) {
      auto tmp = poss;
      for(int f = 1; f <= quantity[i]; ++f) {
         for(int elt : tmp)
               poss.insert(elt + f * coins[i]);
      }
   }

   return poss.size() - 1;
}
