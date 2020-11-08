#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    
    int fact = n * factorial(n-1);

    return fact;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    
    int result = factorial(n);
    cout << result << "\n";

    return 0;
}
