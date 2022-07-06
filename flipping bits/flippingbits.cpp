#include <iostream>
#include <cmath>
using namespace std;
long long flippingBits(int n)
{
    long long newN = 0;
    long long x[32];
    for (int i = 0; i <= 32; i++)
    {
        x[i] = 0;
    }
    for (int i = 0; i <= 31; i++)
    {
        x[i] = n % 2;
        n = n / 2;
    }
    for (int i = 0; i <= 31; i++)
    {
        if (x[i] == 1)
            x[i] = 0;
        else
            x[i] = 1;
    }
    for (int i = 0; i <= 31; i++)
    {
        if(x[i] == 1)
            x[i] = pow(2,i);
    }
    
    //cout << pow(2,31);
    for (int i = 0; i <= 31; i++)
    {
        newN += x[i];
    }

    return newN;
}

int main()
{
    cout << flippingBits(9);
    return 0;
}