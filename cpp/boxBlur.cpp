#include <vector>

using namespace std;

int averageThreeByThreeMatrix(vector<vector<int>> image, int startRow, int startCol)
{
    int runningSum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            runningSum += image[startRow + i][startCol + j];
        }
    }
    
    return runningSum / 9;
}

vector<vector<int>> solution(vector<vector<int>> image) {
    vector<vector<int>> resultMatrix;
    for (int row = 0; row < image.size() - 2; row++)
    {
        vector<int> newRow;
        for (int col = 0; col < image[0].size() - 2; col++)
        {
            newRow.push_back(averageThreeByThreeMatrix(image, row, col));
        }
        resultMatrix.push_back(newRow);
    }
    
    return resultMatrix;
}
