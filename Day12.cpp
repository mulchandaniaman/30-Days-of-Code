#include <iostream>
#include <vector>

using namespace std;

class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:

        Student(string firstName, string lastName, int identification, vector<int> score) : 
        Person(firstName, lastName, identification)
		{
			this->testScores = score;
		}

		int total = 0;
		char calculate()
		{
			for (int i = 0; i < testScores.size(); i++)
			{
				total = total + testScores[i];
			}
			total = total/testScores.size();
			if (total >= 90)
				return 'O';

			else if (total >= 80)
				return 'E';
			
			else if (total >= 70)
				return 'A';
			
			else if (total >= 55)
				return 'P';
			
			else if (total >= 40)
				return 'D';
			
			else
				return 'T';
		}

};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
	int tmpScore;
  	for(int i = 0; i < numScores; i++){
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}