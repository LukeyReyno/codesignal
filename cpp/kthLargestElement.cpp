#include <vector>
#include <stack>
#include <algorithm>

using namespace std;;

int kthLargestElement(vector<int> nums, int k) {
   stack<int> ordered;
   int result;

   sort(nums.begin(), nums.end());
   for (auto n : nums) ordered.push(n);
   
   for (int i = 1; i < k; i++)
      ordered.pop();

   result = ordered.top();
   return result;
}

/* Priority Queue for sort
int kthLargestElement(std::vector<int> nums, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int v : nums) {
        pq.push(v);
        if (pq.size() > k)
            pq.pop();
    }
    return pq.top();
}
*/
