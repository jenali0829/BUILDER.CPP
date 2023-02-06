#include<iostream>

using namespace std;

class student{
	
	private:
		
		int stu_id;
		int stu_age;
		char stu_name[100];
		char stu_course[100];
		char stu_email[100];
		char stu_city[100];
		char stu_college[100];
		
		public:
			void setter();
			void getter();
};

void student::setter(){
	
	cout<<"Enter id:";
	cin>>stu_id;
	
	cout<<"Enter age:";
	cin>>stu_age;
	
	cout<<"Enter name:";
	cin>>stu_name;
	
	cout<<"Enter course:";
	cin>>stu_course;
	
	cout<<"Enter email:";
	cin>>stu_email;
	
	cout<<"Enter city:";
	cin>>stu_city;
	
	cout<<"Enter college:";
	cin>>stu_college;
}

void student::getter(){
	
	cout<<stu_id<<endl;
	cout<<stu_age<<endl;
	cout<<stu_name<<endl;
	cout<<stu_course<<endl;
	cout<<stu_email<<endl;
	cout<<stu_city<<endl;
	cout<<stu_college<<endl;
}

main(){
	
	student o[5];
	int i;
	 
	 for(i=0; i<=4; i++){
	 	o[i].setter();
	 	o[i].getter();
	 }
}

