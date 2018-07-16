#include<iostream>
using namespace std;
struct student{
	int roll;
	char name[30];
	char fname[30];
	char address[100];
	char phone[15];
	char email[80];
	char website[100];
	int mark[3];
	int total;
	char grade;
	char std[10];
	char session[20];
	
};
void print_data(int x, char y[],char add[],char ph[]){
	cout<<"\n Roll :"<<x;
	cout<<"\n Name :"<<y;
}

int main(){
	student s={10,"Swapnil"};
	print_data(s.roll,s.name);
	return 0;
}
