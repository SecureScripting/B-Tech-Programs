#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	srand(time(0));
	int guess, correctguess = 0, rno;
	system("clear");

	cout<<"=============================================================================="<<endl;
	cout<<"			Welcome To Random Number Guessing Event"<<endl;
	cout<<"=============================================================================="<<endl;
	do{	
		rno = rand() % 11;
		cout<<"Your Correct Guesses: "<<correctguess<<endl;
		cout<<"Guess The Number: ";
		cin>>guess;
		guess == rno ? cout<<"Congratulation You Guess The NO:"<<endl : cout<<"Wrong Guess Try Again!"<<endl;

	guess == rno ? correctguess +=1 : correctguess = correctguess;
	}while(guess != rno);

	return 0;
}
