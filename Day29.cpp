#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int testCase;
    int N, K;
    int temp = 0;
    int Result;

    cin >> testCase;
    while (testCase--)
    {
        cin >> N >> K;
        temp = 0;
        
        for (int a = 1; a < N; a++)
        {
            for (int b = a+1; b < N; b++)
            {
                Result = a & b;
                if (Result > temp && Result < K)
                    temp = Result;
            }
            
        }
        cout << temp << endl;
        
    }
    
    return 0;
}


//! Passed All Cases
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int testCase;
//     int n, k;
//     int temp = 0;
//     int Result;

//     cin >> testCase;
//     while (testCase--)
//     {
//         cin >> n >> k;
//         temp = 0;
//         cout << ((((k - 1) | k) > n && k % 2 == 0) ? k - 2 : k - 1) << endl;
        
//     }
    
//     return 0;
// }