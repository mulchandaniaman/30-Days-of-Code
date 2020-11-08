#include<iostream>
#include<map>
using namespace std;

int main(int argc, char const *argv[])
{
    int count;
    cin >> count;
    string name;
    long val;
    map<string, long> phoneBook;
    for (int i = 0; i < count; i++)
    {
        cin >> name;
        cin >> val;
        phoneBook[name] = val;
    }
    
    while (cin >> name)
    {
        if (phoneBook.find(name) != phoneBook.end())
            cout << name << " = " << phoneBook.find(name)-> second << endl;
        else
            cout << "Not found" << endl;
    }
    return 0;
}
