#include<iostream>
#include<string.h>

using namespace std;
class Room{
	
	public:
		~Room(){
			
			cout<<"End of program"<<endl;
		}
		
		Room(){
			
			cout<<"Start of program"<<endl;
		}
};

main(){
	
	Room obj;
}
