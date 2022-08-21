#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> inputArray) {
    int result = 1;
    sort(inputArray.begin(), inputArray.end());
    while (true)
    {
        int position = 0;
        int obstacleIndex = 0;
        int obstacle = inputArray[obstacleIndex];

        while (true)
        {
            position += result;
            if (position == obstacle)
            {
                result++;
                break;
            }
            
            bool needBreak = false;
            while (position > obstacle)
            {
                obstacleIndex++;
                if (obstacleIndex == inputArray.size())
                {
                    return result;
                }
                obstacle = inputArray[obstacleIndex];
                if (position == obstacle)
                {
                    result++;
                    needBreak = true;
                    break;
                }
            }
            if (needBreak)
                break;
        }
    }
    
    return result;
}
