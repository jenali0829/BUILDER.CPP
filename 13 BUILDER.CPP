#include<iostream>
using namespace std;

class bank{

	public:

		char a;
		int b;
		char name[50];
		char c;
		char n;
		char S;
		int number;
		int no;
		char mail;
		int w,v,z;

	public:

		void setData();
		void getData();



};

void bank::setData(){

	cout<<"-: BANK MANAGMENT SYSTEM :-"<<endl;
	cout<<"-: Designed N Programed By :-"<<endl;
	cout<<" JEMEE DEDANIYA"<<endl<<endl;
	cout<<"-: Trainer :-"<<endl;
	cout<<" VASU PATEL"<<endl<<endl;

	cout<<"Press Key N Enter To Continue.....";
	cin>>a;
	if(a==n){

		cout<<"-: Press A to Log in as Aministrator or S to Log in as STAFF :-";
		cin>>c;
		if(c==S){

			cout<<"-: Welcome as STAFF :-";

			cout<<"Enter Staff Name :";
			cin>>name;

			cout<<"Enter Account Number Of staff :";
			cin>>number;

			cout<<"Enter Phone Number Of Staff :";
			cin>>no;

			cout<<"Enter E-mail of Staff :";
			cin>>mail;

			cout<<"Press [1] to Deposite the money:";
			cout<<"Press [2] to Transfer the money:";
			cout<<"Press [3] to Withdraw the money:";
			cin>>b;

			if(b==3){

				cout<<"Withdraw the Money :";
				cin>>w;

			  cout<<"your Actual Bank Amount is :";
			  cin>>v;

			  cout<<"Congrates Your Amount Has Withdraw Successfully."<<endl;

			  z=v-w;

			  cout<<"Your Account Balance Is :"<<z<<endl;			
			}
			else if(b == 2){
				cout<<"Transfer the Money :";
				cin>>w;

			  cout<<"your Actual Bank Amount is :";
			  cin>>v;

			  cout<<"Congrates Your Amount Has Transfer Successfully."<<endl;

			  z=v-w;

			  cout<<"Your Account Balance Is :"<<z<<endl;
			}
			else if(b==1){
				cout<<"Deposite the Money :";
				cin>>w;

			  cout<<"your Actual Bank Amount is :";
			  cin>>v;

			  cout<<"Congrates Your Amount Has Deposite sucessfully."<<endl;

			  z=v-w;

			  cout<<"Your Account Balance Is :"<<z<<endl;

			}
			else{

			}
		}
		else{
			cout<<"-: Welcome as Aministrator :-";


		}
	}
	else{
		cout<<"Please Enter N "<<endl;
	}	

}

void bank::getData(){

	cout<<"Name - "<<name<<endl;
	cout<<"Number - "<<number<<endl;
	cout<<"Phone no. - "<<no<<endl;
	cout<<"e-mail - "<<mail<<endl;

}

main(){

	bank o;
	o.setData();
	o.getData();


}
