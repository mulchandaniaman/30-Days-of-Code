#include<iostream>
#include<sstream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string s;
    cout << "Enter string: ";
    cin >> s;
    try
    {
        cout << stoi(s);
    }
    catch(const std::exception& e)
    {
        cout << "Bad String";
    }
    cout << endl;
    return 0;
}
