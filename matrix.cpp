#include <iostream>
//#include <stdlib>
using namespace std;


void determenent(int *b)
{
	cout<<"Hello World!";

}

int main()
{
	int a[5][5];
	system("clear");
	cout<<"Enter Your Array Elements: "<<endl;
	for(int i = 0; i<=1; i++)
	{
		for(int j = 0; j<=1; j++)
		{
			cout<<"Enter Element: "<<"a["<<i<<"]"<<"["<<j<<"]";
			cin>>a[i][j];
		}
	}
	cout<<"Your Matrix is:"<<endl;
	for(int i=0; i<=1; i++)
	{
		cout<<"|";
		for(int j=0; j<=1; j++)
		{
			cout<<" "<<a[i][j]<<" ";
		}
		cout<<"|"<<endl;
	}

	int det = (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);

	cout<<"Determinent of matrix is: |A|= "<<det;


	return 0;
}
