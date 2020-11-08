#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int> input)
    {
        this->elements = input;
    }

    void computeDifference()
    {
        int diff = 0;
        int maximum = 0, minimum = 100;
        int start = elements[0];
        for (int i = 0; i < elements.size(); i++)
        {
            maximum = max(maximum, elements[i]);
            minimum = min(minimum, elements[i]);
        }
        cout << endl;
        cout << "Max: " << maximum << endl;
        cout << "Min: " << minimum << endl;
        maximumDifference = maximum - minimum;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}