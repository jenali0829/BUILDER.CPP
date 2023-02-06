#include<iostream>
#include<string.h>
using namespace std;


class highschool{
	
    public:
		static char name[50];
		int rollno;
		int std;
		int age;
		static int contact;
		char institude[50];
		char address[50];
		
	void setter();
	void getter();
};
class college{
	public:
	void set(){
	
	highschool h;
	cout<<"Enter Student Name: ";
	cout<<h.name;
	
	cout<<"Enter Student Roll No.: ";
	cout<<h.rollno;
	
	cout<<"Enter Student std: ";
	cout<<h.std;
	
	cout<<"Enter Student Age: ";
	cout<<h.age;
	
	cout<<"Enter Student Contact: ";
	cout<<h.contact;
	
	cout<<"Enter Student Education Institude Name: ";
	cout<<h.institude;
	
	cout<<"Enter Student Address: ";
	cout<<h.address;
	
	cout<<"Student Name = "<<h.name<<endl;
	cout<<"Student Roll No = "<<h.rollno<<endl;
	cout<<"Student Std = "<<h.std<<endl;
	cout<<"Student Age = "<<h.age<<endl;
	cout<<"Student Contact = "<<h.contact<<endl;
	cout<<"Student Education Institude Name = "<<h.institude<<endl;
	cout<<"Student Address = "<<h.address<<endl<<endl;
}
	
};
void highschool::setter(){
	
	cout<<"Enter Student Name: ";
	cout<<name;
	
	cout<<"Enter Student Roll No.: ";
	cout<<rollno;
	
	cout<<"Enter Student std: ";
	cout<<std;
	
	cout<<"Enter Student Age: ";
	cout<<age;
	
	cout<<"Enter Student Contact: ";
	cout<<contact;
	
	cout<<"Enter Student Education Institude Name: ";
	cout<<institude;
	
	cout<<"Enter Student Address: ";
	cout<<address;
	

	
}
void highschool::getter(){
	
	cout<<"Student Name = "<<name<<endl;
	cout<<"Student Roll No = "<<rollno<<endl;
	cout<<"Student Std = "<<std<<endl;
	cout<<"Student Age = "<<age<<endl;
	cout<<"Student Contact = "<<contact<<endl;
	cout<<"Student Education Institude Name = "<<institude<<endl;
	cout<<"Student Address = "<<address<<endl<<endl;
	
	
}
     char highschool::name[50] = "jenali";
     int highschool::contact = 9099919;
     
main(){
	
	
	highschool o;
	o.setter();
	o.getter();
	
	college j;
	j.set();
		
}

