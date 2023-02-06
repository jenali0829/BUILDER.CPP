#include<iostream>
#include<string.h>

using namespace std;
class student{
	
	public:
		
		int stu_id;
		char stu_name[100];
		

};

class classdetails{
	
	private:
		
		student obj;
		
	
		
		public:
			
			void setter(){
				
				cout<<"Enter stu id:";
				cin>>obj.stu_id;
				
				cout<<"Enter stu name:";
				cin>>obj.stu_name;
				
			}
			void getter(){
				
				cout<<"Your stu id:"<<obj.stu_id;
				cout<<"Your name:"<<obj.stu_name;
			}
		
};

main(){
	
	classdetails obj;
	
	obj.setter();
	obj.getter();
}
