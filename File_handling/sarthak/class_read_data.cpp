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
	ifstream fin("student.dat");
	student s;
	
	while(fin.read((char *)&s,sizeof(student)))
			s.show_data();
	fin.close();
	
	return 0;
}
