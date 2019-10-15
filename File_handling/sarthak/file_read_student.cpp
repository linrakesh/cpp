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
	
	ifstream fin("student.dat");
	student s;
	cout<<"\n Data from file \n";
	
	while(fin.read((char *)&s,sizeof(student))){
		cout<<"\n Admno :"<<s.admno;
		cout<<"\n Name  :"<<s.name;
		cout<<"\n Address :"<<s.add;
		cout<<"\n Fees :"<<s.fees;
	}	
	fin.close();
	
	return 0;
}
