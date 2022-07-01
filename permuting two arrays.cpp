#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int> *arr, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr->at(i);
        j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr->at(j) > key)
        {
            arr->at(j + 1) = arr->at(j);
            j = j - 1;
        }
        arr->at(j + 1) = key;
    }
}
void insertionSort2(vector<int> *arr, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr->at(i);
        j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr->at(j) < key)
        {
            arr->at(j + 1) = arr->at(j);
            j = j - 1;
        }
        arr->at(j + 1) = key;
    }
}
string twoArrays(int k, vector<int> A, vector<int> B)
{
    int n = A.size();
    insertionSort(&A, n);
    insertionSort2(&B, n);
    vector<int> A2;
    string answer;

    for (int i = 0; i < n; i++)
    {
        if ((A[i] + B[i]) < k)
        {
            answer =  "NO";
        }
        if (i == n-1 && answer != "NO")
        {
            answer = "YES";
        }
        
    }
    return answer;
}

int main()
{
    vector<int> a = {2,1,3};
    //insert_iterator(&a,3);
    vector<int> b = {7,8,9};
    cout << twoArrays(10,a,b);
    return 0;
}