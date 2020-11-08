// TODO: Given a base- integer ,n, convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive 's in 's binary representation.

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cin >> number;
    int flag = 0;
    int result = 0;
    int rem;
    while (number != 0)
    {
        rem = number % 2;
        if (rem == 1)
        {
            flag++;
            if (flag >= result)
                result = flag;
        }
        else
            flag = 0;
        number = number/2;
    }

    cout << result;if (flag >= result)
            {
                result = flag;
            }
            
        else
            flag = 0;
    cout << endl;
    return 0;
}
