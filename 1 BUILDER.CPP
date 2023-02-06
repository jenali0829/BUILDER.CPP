#include<iostream>

using namespace std;

class Employee{
	
	private:
		
		int emp_id;
		int emp_salary;
		int emp_contact;
		char emp_name[100];
		char emp_role[100];
		char emp_experience[100];
		char emp_address[100];
		char emp_email[100];
		
		
		public:
			void setter();
			void getter();
};

void Employee::setter(){
	
	cout<<"Enter id:";
	cin>>emp_id;
	
	cout<<"Enter salary:";
	cin>>emp_salary;
	
	cout<<"Enter contact:";
	cin>>emp_contact;
	
	cout<<"Enter name:";
	cin>>emp_name;
	
	cout<<"Enter role:";
	cin>>emp_role;
	
	cout<<"Enter experience:";
	cin>>emp_experience;
	
	cout<<"Enter address:";
	cin>>emp_address;
	
	cout<<"Enter email:";
	cin>>emp_email;
}

void Employee::getter(){
	
	cout<<emp_id<<endl;
	cout<<emp_salary<<endl;
	cout<<emp_contact<<endl;
	cout<<emp_name<<endl;
	cout<<emp_role<<endl;
	cout<<emp_experience<<endl;
	cout<<emp_address<<endl;
	cout<<emp_email<<endl;
}

main(){
	
	Employee o[5];
	int i;
	 
	 for(i=0; i<=4; i++){
	 	o[i].setter();
	 	o[i].getter();
	 }
}

