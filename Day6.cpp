// int main()
// {
//     string S = "";
//     int count;
//     cin >> count;
//     for (int i = 0; i < count; i++)
//     {
//         cin >> S;
//         for (int i = 0; S[i] != '\0'; i = i+=2)
//             cout << S[i];
//         cout << " ";
//         for (int i = 0, j = 1; S[i] != '\0'; i++)
//         {
//             cout << S[j];
//             j+=2;
//         }
//         cout << endl;
//         S.clear();
//     }
    
//     return 0;
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int kk;
    cin >> kk;
    string str = "";

    while(kk>0){
        
        vector<char> even_v;
        vector<char> odd_v;
        cin >> str;
        
        for(int i = 0; i < str.length(); i++){
            if (i % 2 == 0)
            even_v.push_back(str[i]);           
            
            else
            odd_v.push_back(str[i]);           
        }    
        string even_s(even_v.begin(), even_v.end());
        string odd_s(odd_v.begin(), odd_v.end());
        cout << even_s << " " << odd_s <<endl;   
            
        even_v.clear();
        odd_v.clear();
        kk--;
    }
    return 0;
}