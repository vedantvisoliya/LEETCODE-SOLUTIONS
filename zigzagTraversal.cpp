#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

vector<int> zigzagTraversalNew(vector<vector<int>> grid)
{
    vector<int> output = {};
    int j = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        if (j == 0)
        {
            for (j; j < grid[i].size(); j++)
            {
                if ((i + j) % 2 == 0)
                    output.push_back(grid[i][j]);
            }
            j = grid[i].size() - 1;
        }
        else if (j == (grid[i].size() - 1))
        {
            for (j; j >= 0; j--)
            {
                if ((i + j) % 2 == 0)
                {
                    output.push_back(grid[i][j]);
                }
            }
            j = 0;
        }
    }
    return output;
}

int main()
{
    vector<int>::iterator it;
    
    std::vector<std::vector<int>> vec = {
        // [[1,2,1,3],[5,15,7,3],[10,4,14,12]]
        {1, 2, 1, 3},
        {5, 15, 7, 3},
        {10, 4, 14, 12}};

    vector<int> output = zigzagTraversalNew(vec);

    for (int k = 0; k < output.size(); k++){
        cout << output[k] << " ";
    }

    return 0;
}