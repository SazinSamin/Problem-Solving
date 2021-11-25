// problem link: https://www.hackerrank.com/challenges/30-inheritance/problem?h_r=profile

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
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
            /*
     *   Class Constructor
     *
     *   Parameters:
     *   firstName - A string denoting the Person's first name.
     *   lastName - A string denoting the Person's last name.
     *   id - An integer denoting the Person's ID number.
     *   scores - An array of integers denoting the Person's test scores.
     */
    // Write your constructor here
    Student(string fName, string lName, int id, vector<int> score) : testScores(score), Person(fName, lName, id){}
    /*
     *   Function Name: calculate
     *   Return: A character denoting the grade.
     */
    // Write your function here
    string calculate(){
        int sum = 0;
        for(auto it = testScores.begin(); it < testScores.end(); it++){
            sum += *it;
        }

        int avg = sum / testScores.size();

        string result;
        if(avg >= 90 && avg <= 100){
            result = "O";
        }else if(avg >= 80 && avg < 90){
            result = "E";
        }else if(avg >= 70 && avg < 80){
            result = "A";
        }else if(avg >= 55 && avg < 70){
            result = "P";
        }else if(avg >= 40 && avg < 55){
            result = "D";
        }else if(avg < 40){
            result = "T";
        }

        return result;
    }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
