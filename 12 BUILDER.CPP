#include<iostream>
using namespace std;
class supermarket{
	
	char id[50];
	char password[50];
	int number;
	char name[50];
	int quantity;
	int tax;
	int dis;
	
	public:
		
	
	void setter();
	void getter();
	
};

void supermarket::setter(){
	
	cout<<"Enter User Id:";
	cin>>id;
	
	
	 if(id == id){
		    cout<<"Enter Password: ";
			cin>>password;
		   	
		   	if(password == password){
		   		
		   		cout<<"Log In"<<endl;
		   		
	cout<<"Enter Item Number:";
	cin>>number;
	
	cout<<"Enter Item Name:";
	cin>>name;
	
	cout<<"Enter Item Quantity:";
	cin>>quantity;
	
	cout<<"Enter Item Tax:";
	cin>>tax;
	
	cout<<"Enter Item Discount:";
	cin>>dis;
		}
			   else{
			   	
			   	cout<<"Enter Valid Password";
			   }
		   }
		   else{
		   	
		    cout<<"Enter Valid User Id";
		    
		   }
		
	
}

void supermarket::getter(){
	
	cout<<number<<endl;
	cout<<name<<endl;
	cout<<quantity<<endl;
	cout<<tax<<endl;
	cout<<dis<<endl;
}

main(){
	
	int i;
	
	supermarket obj;
	
	
	
	for(i=0; i<10; i++){
		
		obj.setter();
		obj.getter();
	}
	
	
	
	
	
}



