#include <iostream>
#include <vector>

using namespace std;

bool toeplitz_matrix(vector<vector<int>>& matrix)
{
    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[i].size(); j++)
        {
            if (matrix[i - 1] [j - 1] < matrix[i][j])
                return false;
        }
    }
    cout << matrix.size();
    return true;
}