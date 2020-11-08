#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
    vector<int> num;
public:
    int divisorSum(int n) 
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i ==0)
            {
                num.push_back(i);
            }
            
        }
        int sum = accumulate(num.begin(), num.end(), 0);
        return sum;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}