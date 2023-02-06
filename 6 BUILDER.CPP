#include<iostream>

using namespace std;
class user{
	
	private:
		
		int a;
		char name[100];
		
		public:
			
			user(){
				
				cout<<"Enter number:";
				cin>>a;
				
				cout<<"Enter name:";
				cin>>name;
			}
			
			void getter();
};
void user::getter(){
	
	cout<<a<<endl;
	cout<<name;
}
main(){
	
	user obj;
	
	obj.getter();
}
