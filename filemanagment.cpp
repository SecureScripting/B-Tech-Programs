#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char *argv[]){
	ofstream file("text.txt", ios::app);
	file << "This is new line";
	file.close();
	return 0;
}
