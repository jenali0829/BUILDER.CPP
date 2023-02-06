#include<iostream>
using namespace std;

class reservation{
	
	private:
		
		int number;
		int time;
		char name[50];
		char source[50];
		char destination[50];
		
	public:
		
		void setter();
		void getter();
};

void reservation::setter(){
	
	cout<<"Enter Train Number:";
	cin>>number;
	
	cout<<"Enter Train Time:";
	cin>>time;
	
	cout<<"Enter Train Name:";
	cin>>name;
	
	cout<<"Enter Train Source:";
	cin>>source;
	
	cout<<"Enter Train Destination:";
	cin>>destination;
	
	
	
}

void reservation::getter(){
	
	cout<<"Train Number = "<<number<<endl;
	
	if(number == 1){
		
		cout<<"Train Time is 9:00 AM"<<endl;
		cout<<"Train Name is Rajdhani"<<endl;
		cout<<"Train Start From Mumbai"<<endl;
		cout<<"Train Destination Is Surat"<<endl;
		
	}
	else  if(number == 2){
		cout<<"Train Time is 9:00 PM"<<endl;
		cout<<"Train Name is Local"<<endl;
		cout<<"Train Start From Jamnagar"<<endl;
		cout<<"Train Destination Is Rajkot"<<endl;
		
	}
	
	else if(number == 3){
		cout<<"Train Time is 11:00 AM"<<endl;
		cout<<"Train Name is Rajdhani"<<endl;
		cout<<"Train Start From Mumbai"<<endl;
		cout<<"Train Destination Is Delhi"<<endl;
		
	}
	
    else{
    	
    	cout<<"Enter Valid Number"<<endl;
	}
	
}

main(){
	
	int i;
	reservation o;
	
	for(i=0 ; i<3; i++){
	
	o.setter();
	o.getter();
	
}
	
	
}




