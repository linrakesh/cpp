// call by reference method


#include<iostream>
#include<string.h>
using namespace std;
struct student{
	int roll;
	char name[30];
	char fname[30];
};

void change_data(student &r){
	r.roll= 10;
	strcpy(r.name,"rakesh");
	strcpy(r.fname,"sudarshan Sharma");
}

int main(){

	student s={10,"Swapnil","R.K. Sharma"};
	
	cout<<"\n Roll :"<<s.roll;
	cout<<"\n Name :"<<s.name;
	cout<<"\n Father Name" <<s.fname;
	
	change_data(s);
	
	
	cout<<"\n Roll :"<<s.roll;
	cout<<"\n Name :"<<s.name;
	cout<<"\n Father Name" <<s.fname;
	return 0;
}
