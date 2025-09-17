#include <iostream>
using namespace std;


int main(int argc, char *argv[]){
	string question[] = {"1. What year was c++ created?: ",
				"2. Who is the father of c++?: ",
				"3. Is the earth flat?: "};

	string option[][4] = {{"A. 1969", "B. 1972", "C. 1975", "D. 1985"},
				{"A. Burjan Strounstrup", "B. Guedo ran vissom", "C. Denice Ruchi", "4. Mark Zakurburk"},
				{"A. Yes", "B. Somethimes", "C. NO", "D. Maybe"}};
	char correctKey[] = {'D', 'A', 'C' };

	int size = sizeof(question)/sizeof(question[0]);
	int score = 0;
	char guess;
	//cout<<sizeof(question[0])<<endl;
	//cout<<option[0][0]<<endl;
	//cout<<sizeof(option[0])/sizeof(option[1][0])<<endl;
	//cout<<sizeof(option[0]);
	
	for(int i = 0; i < size; i++){
		cout<<"====================================================="<<endl;
		cout<<question[i]<<endl;
		cout<<"====================================================="<<endl;
		
		for(int j=0; j < sizeof(option[0])/sizeof(option[i][0]); j++){
			cout<<option[i][j]<<endl;
		}
		
		cout<<"Answer:  ";
		cin>>guess;

		guess = toupper(guess);

		if(guess == correctKey[i]){
			cout<<"CORRECT"<<endl;
			score++;
		}else{
			cout<<"WRONG!"<<endl;
		}

		}
	cout<<"Your Score is: "<<score<<endl;

	return 0;
}
