#include<fstream>
#include<iostream>
using namespace std;
struct student{
	int admno;
	char name[30];
	char add[80];
	float fees;
};

int main(){
	ofstream fout("student.dat",ios::app);
	student s;
	char choice;
	do{
		cout<<"\n Enter admno :";
		cin>>s.admno;
		cout<<"\n Enter name : ";
		cin>>s.name;
		cout<<"\n Enter address :";
		cin>>s.add;
		cout<<"\n Enter fees : ";
		cin>>s.fees;
		fout.write((char *)&s, sizeof(student));
		cout<<"\n Want to add more records(y/n) :";
		cin>>choice;
	}while(choice!='n');
	
	fout.close();
	
	return 0;
}
