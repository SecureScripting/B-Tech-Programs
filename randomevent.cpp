#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]){
	srand(time(0));
	int guess;
	int rno = rand() % 7;

	system("clear");
	cout<<"================================================="<<endl;
	cout<<"		Welcome to random WON event"<<endl;
	cout<<"================================================="<<endl;

//	cout<<"What is your guess between 1 to 5: ";
//	cin>>guess;
//	cout<<rno;
	switch(rno){
		case 1: cout<<"Congratulations you won a LG T.V"<<endl;
			break;
		case 2: cout<<"Congratulations you won a Iphone 13"<<endl;
			break;
		case 3: cout<<"Congratulations you won a BMW M4"<<endl;
			break;
		case 4: cout<<"Congratulations you won a HP Omen gaming laptop"<<endl;
			break;
		case 5: cout<<"Congratulations your won a 1 year Netflix Sub"<<endl;
			break;
		deafult: cout<<"Sorry! Better Luck Next Time, Thank you.";
	}
	return 0;
}
