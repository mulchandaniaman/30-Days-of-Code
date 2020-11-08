#include <bits/stdc++.h>
using namespace std;

void ifWeird(int N)
{
    if (N % 2 == 0)
    {
        if (N >= 2 && N < 5){
            cout << "Not Weird" << endl;
        }
        if (N >= 6 && N <= 20)
        {
            cout << "Weird" << endl;
        }
        if (N > 20)
        {    
            cout << "Not Weird" << endl;
        }
    }
    else
        cout << "Weird" << endl;
}

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    ifWeird(N);
    return 0;
}