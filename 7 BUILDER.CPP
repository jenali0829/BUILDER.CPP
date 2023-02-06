#include<iostream>
#include<string.h>

using namespace std;
class Room{
	
	private:
		
		int a;
		char name[100];
		
		public:
			
			Room(int a, char name[100]){
				
				this->a=a;
				strcpy(this->name,name);
				
				cout<<a<<endl;
				cout<<name<<endl;
			}
			user(){
				cout<<"End of program";
			}
		
			
};

main(){
	
	char name[]="jenali";
	
	Room obj(10,name);
}
