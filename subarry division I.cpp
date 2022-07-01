#include <iostream>
#include <vector>

using namespace std;

int birthday(vector<int> s, int d, int m)
{
    int answer = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int sum =0;
        for ( int j = 0; j < m && ((i+m) <= s.size()); j++)
        {
            sum += s.at(i+j);
        }
        if (sum == d)
        {
            answer=answer +1;
        }  
    }
    return answer;
}

int main()
{
    vector<int> s = {2,2,1,3,2};
    int d=4,m=2;
    cout << birthday(s,d,m);
    return 0;
}