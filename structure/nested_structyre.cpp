#include<iostream>
using namespace std;
struct address{
	char houseNo[10];
	char society[20];
	char area[20];
	char locality[30];
	char city[20];
	char state[20];
	char country[100];
};

struct date{
	int day;
	int month;
	int year;
};
struct student{
	int 		roll;
	char 		name[30];
	address 	add;
	date        dob;
};
int main(){
	student s;
	
	return 0;
}
