 #include<iostream>
#include<string.h>
using namespace std;

class hotel{

	private:

    int	hotel_id;
	int hotel_establish_year; 
	int hotel_staff_size;
    char hotel_name[50];
    char hotel_type[40]; 
    char hotel_room_size[50];
    char hotel_address[50];
    char hotel_rating[50];
    char hotel_website[50];

	public:


	hotel(int hotel_id, int hotel_establish_year, int hotel_staff_size, char hotel_name[], char hotel_type[], char hotel_room_size[], char hotel_address[], char hotel_rating[], char hotel_website[]){

	this->hotel_id=hotel_id;
	this->hotel_establish_year=hotel_establish_year;
	this->hotel_staff_size=hotel_staff_size;
    strcpy(this->hotel_name,hotel_name);
	strcpy(this->hotel_type,hotel_type);
	strcpy(this->hotel_room_size,hotel_room_size);
	strcpy(this->hotel_address,hotel_address);
	strcpy(this->hotel_rating,hotel_rating);
	strcpy(this->hotel_website,hotel_website);

	}	

	void getter();


};

void hotel::getter(){
	cout<<"Hotel id = "<<hotel_id<<endl;
	cout<<"Hotel Establish Year = "<<hotel_establish_year<<endl;
	cout<<"Hotel Staff Size = "<<hotel_staff_size<<endl;
    cout<<"Hotel name = "<<hotel_name<<endl;
	cout<<"Hotel Type = "<<hotel_type<<endl;
	cout<<"Hotel Room Size = "<<hotel_room_size<<endl;
	cout<<"Hotel Address = "<<hotel_address<<endl;
	cout<<"Hotel Ratind = "<<hotel_rating<<endl;
	cout<<"Hotel Website = "<<hotel_website<<endl;
}

main(){




	int n;
	int i;
	int	hotel_id;
	int hotel_establish_year; 
	int hotel_staff_size;
    char hotel_name[50];
    char hotel_type[40]; 
    char hotel_room_size[50];
    char hotel_address[50];
    char hotel_rating[50];
    char hotel_website[50];


	cout<<"Enter value:";
	cin>>n;

	for(i=0; i<n; i++){

	cout<<"Enter Hotel id:";
	cin>>hotel_id;

	cout<<"Enter Hotel Establish Year:";
	cin>>hotel_establish_year;

	cout<<"Enter Hotel Staff Size:";
	cin>>hotel_staff_size;

	cout<<"Enter Hotel Name:";
	cin>>hotel_name;

	cout<<"Enter Hotel Type:";
	cin>>hotel_type;

	cout<<"Enter Hotel Room Size:";
	cin>>hotel_room_size;

	cout<<"Enter Hotel Address:";
	cin>>hotel_address;

	cout<<"Enter Hotel Rating:";
	cin>>hotel_rating;

	cout<<"Enter Hotel Website:";
	cin>>hotel_website;

	hotel o(hotel_id,hotel_establish_year,hotel_staff_size,hotel_name,hotel_type,hotel_room_size,hotel_address,hotel_rating,hotel_website);

	o.getter();
}

}
