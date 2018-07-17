#include<iostream>
using namespace std;

struct student{
	int 		roll;
	char 		name[30];
	struct date{
			int day;
			int month;
			int year;
		}dob;
	struct address{
		char houseNo[10];
		char society[20];
		char area[20];
		char locality[30];
		char city[20];
		char state[20];
		char country[100];
		}add;
};

int main(){
	student s;
	cout<<"Enter roll No :";
	cin>>s.roll;
	cout<<"\n Enter name :";
	cin>>s.name;
	cout<<"\n Enter date :";
	cin>>s.dob.day;
	cin>>s.dob.month;
	cin>>s.dob.year;
	
	cout<<"\n Roll :"<<s.roll;
	cout<<"\n Name :"<<s.name;
	cout<<"\n Dob :"<<s.dob.day<<"-"<<s.dob.month<<"-"<<s.dob.year;
	
	return 0;
}
