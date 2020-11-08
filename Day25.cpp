#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int input, testCase;

    cin >> testCase;
    while (testCase--)
    {
        /* code */
        cin >> input;

        for (int i = 2; i*i <= input; i++)
        {
            if (input%i == 0) input = 1;
        }
        if (input == 1) cout << "Not prime" << endl;
        else cout << "Prime" << endl;
        
    }
    return 0;
}