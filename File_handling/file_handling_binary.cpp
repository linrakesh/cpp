#include<fstream>
#include<iostream>
using namespace std;
struct student{
	int roll;
	char name[30];
	char address[100];
};

int main(){
	ofstream fout("student.dat",ios::app);  //ios::app  - file mode
	student s;
	char choice='y';
	do{
		cout<<"\n Enter roll :";
		cin>>s.roll;
		cout<<"\n Enter Name :";
		cin>>s.name;
		cout<<"\n Enter address :";
		cin>>s.address;
		//fout<<s.roll<<s.name<<s.address;
		fout.write((char*)&s,sizeof(student));  //binary mode
		cout<<"\n Do you want to add more records(y/n) :";
		cin>>choice;
	}while(choice!='n');
	
	
	fout.close();
	
	return 0;
}
