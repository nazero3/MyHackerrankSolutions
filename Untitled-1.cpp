#include <iostream>

using namespace std;
void insertionsort(int a[], int n)
{
    int i,j,key = 0;
    for ( i = 1; i < n; i++)
    {
        j = i-1;
        key = a[i];
        while (j >=0 && a[j] > key){
            a[j+1] = a[j];
            j=j-1;
        }
        a[j+1] = key;
    }
    
}
void add(int *x, int *y)
{
    *x = 2;
    *y = 3;
}
int main()
{
    int a = 0, b = 0;
    add(&a, &b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}