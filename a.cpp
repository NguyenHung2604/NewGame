#include <iostream>
using namespace std;

long long fib(int n)
{
    int num[n];
    num[1] = 1; num[0] = 1;
    
    if(n > 2)
    {
        for(int i = 2; i < n; i++)
        {
            num[i] = num[i - 1] + num[i - 2];
        }
    }

    return num[n - 1];
}

int main()
{
    int n;
    cout << fib(n);
}