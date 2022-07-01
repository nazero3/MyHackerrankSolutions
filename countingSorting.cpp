#include <iostream>
#include <vector>

using namespace std;

vector<int> countingSort(vector<int> a)
{
    vector<int> answer;
    for (int i = 0; i < 100; i++)
    {
        answer.push_back(0);
    }
    for (int i = 0; i < a.size(); i++)
    {
        answer.at(a.at(i)) += 1;
    }

    return answer;
}
int main()
{

    vector<int> x = {1, 1, 1, 3, 4};
    countingSort(x);
    return 0;
}
