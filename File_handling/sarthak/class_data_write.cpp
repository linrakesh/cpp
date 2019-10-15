#include<fstream>
#include<iostream>
using namespace std;
class student{
		int admno;
		char name[30];
		char add[80];
		float fees;
	public:
		void read_data(){
			cout<<"\n Enter admno :";
			cin>>admno;
			cout<<"\n Enter Name :";
			cin>>name;
			cout<<"\n Address ";
			cin>>add;
			cout<<"\n Enter fees ";
			cin>>fees;
		}
		void show_data(){
			cout<<"\n Admno "<<admno;
			cout<<"\n Name " <<name;
			cout<<"\n Address "<<add;
			cout<<"\n Fees	" <<fees;
			
		}
};

int main(){
	ofstream fout("student.dat",ios::app);
	student s;
	char choice;
	do{
		s.read_data();
		fout.write((char *)&s, sizeof(student));
		cout<<"\n Want to add more records(y/n) :";
		cin>>choice;
	}while(choice!='n');
	
	fout.close();
	
	return 0;
}
