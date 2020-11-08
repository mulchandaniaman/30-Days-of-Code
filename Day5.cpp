#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int result;
    for (int i = 1; i <= 10; i++)
    {
        result = n * i;
        cout << n <<" x " << i << " = " << result << endl;
    }
    
    return 0;
}
