#include <iostream>
#include <vector>

using namespace std;
int diagonalDifference(vector<vector<int>> a)
{
    long long secondary_sum = 0, diagonal_sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        
        for (int j = 0; j < a.size(); j++)
        {
            if (i == j)
                diagonal_sum += a.at(i).at(j);
        }
    }
    for (int i = 0; i <= a.size()-1; i++)
    {
        secondary_sum += a.at(i).at(a.size()-1-i);
    }
    
    return abs(diagonal_sum - secondary_sum);
}
int main()
{
    vector<vector<int>> x = {{1, 2, 3},
                             {4, 5, 6},
                             {9, 8, 9}};

    //int c = 0;
    cout << diagonalDifference({{1, 2, 3},
                        {4, 5, 6},
                        {9, 8, 9}});
    //cout << c;
    return 0;
}