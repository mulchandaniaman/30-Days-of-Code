#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

vector<string> split_email(string input_string) 
{
    string::iterator new_end = unique(input_string.begin(), 
                                      input_string.end(), 
                                      [] (const char &x, const char &y) {
        return x == y and x == '@';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == '@') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = '@';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

class Solution
{
    map<string, string> Map;
    vector<string> DisplayName;

    public:
        void InsertID(string firstName, string EmailID)
        {
            Map.insert(make_pair(EmailID, firstName));
        }
        void display()
        {
            for (auto itr : Map)
            {
                vector<string> MailCheck = split_email(itr.first);

                if (MailCheck.at(1) == "gmail.com")
                {
                    DisplayName.push_back(itr.second);
                }
                
            }
            
            sort(DisplayName.begin(), DisplayName.end());

            for (int i = 0; i < DisplayName.size(); i++)
            {
                cout << DisplayName.at(i) << endl;
            }
            
        }
};

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    Solution S;
    for (int N_itr = 0; N_itr < N; N_itr++) {
        string firstNameEmailID_temp;
        getline(cin, firstNameEmailID_temp);

        vector<string> firstNameEmailID = split_string(firstNameEmailID_temp);

        string firstName = firstNameEmailID[0];

        string emailID = firstNameEmailID[1];

        S.InsertID(firstName, emailID);
    }
    S.display();
    return 0;
}

vector<string> split_string(string input_string) 
{
    string::iterator new_end = unique(input_string.begin(), 
                                      input_string.end(), 
                                      [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}