#include <iostream>
using namespace std;


class Account{
	private:
		int acno;
		float balance;
		string acholder;
		
	public:
		void createuser(){
			system("clear");
			cout<<"==============================================="<<endl;
			cout<<"		Welcome to xyz bank"<<endl;
			cout<<"==============================================="<<endl;
			cout<<"\n*Adding New Account*"<<endl;

			cout<<"\nEnter Account Holder Full Name: ";
			getline(cin >> ws, acholder);
			cout<<"\nEnter Account Number: ";
			cin>>acno;
			balance = 0;
			cin.get();
		}
		
		void addmoney(){
			float money;
			int account;
			system("clear");
			cout<<"=============================================="<<endl;
			cout<<"		Adding Money in Account"<<endl;
			cout<<"=============================================="<<endl;
			cout<<"How Many Money You Want To Add? > ";
			cin>>money;
			cout<<"Enter User Account Number: ";
			cin>>account;
			if(account == acno){
				balance += money;
				cout<<"Money Added To Account NO: "<<acno<<endl;
				cout<<"Now Your Balance is: "<<balance;
			}else{
				cout<<"Enter Valid Account Number:"<<endl;
			}
			cin.get();
		}

		void showbalance(){
			int accountno;
			system("clear");
			cout<<"==============================================="<<endl;
			cout<<"		Here Your Account Balance"<<endl;
			cout<<"==============================================="<<endl;
			cout<<"Enter Account Number: ";
			cin>>accountno;
			if(accountno == acno){
				cout<<"\nAccount Number: "<<acno<<endl;
				cout<<"Account Holder Name: "<<acholder<<endl;
				cout<<"Account Balance: "<<balance<<endl;
				cout<<"\nThank You!"<<endl;
			}else{
				cout<<"Enter Valid Account Number"<<endl;
			}
			cin.get();
		}
				
};

int main(int argc, char *argv[]){
	Account a[2];
	for(int i=0; i <=1; i++){
	a[i].createuser();
	a[i].addmoney();
	a[i].showbalance();
	}
	return 0;
}
