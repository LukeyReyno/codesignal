#include <vector>

using namespace std;

int countMines(vector<vector<bool>> matrix, int row, int col)
{
    vector<vector<int>> directions = 
    {
        {0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
    };
    
    int total = 0;

    for (auto direction : directions)
    {
        if ((row + direction[0] < matrix.size() && row + direction[0] >= 0) &&
            (col + direction[1] < matrix[0].size() && col + direction[1] >= 0))
        {
            if (matrix[row+direction[0]][col+direction[1]] == true)
                total++;
        }
    }
    
    return total;
}

vector<vector<int>> solution(vector<vector<bool>> matrix) {
    vector<vector<int>> resultMatrix;
    for (int row = 0; row < matrix.size(); row++)
    {
        vector<int> newRow;
        for (int col = 0; col < matrix[0].size(); col++)
        {
            newRow.push_back(countMines(matrix, row, col));
        }
        resultMatrix.push_back(newRow);
    }
    
    return resultMatrix;
}
